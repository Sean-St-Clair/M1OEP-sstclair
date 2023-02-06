#include <iostream>
#include <sstream>
#include <vector>
#include "dungeonRoom.h"

using namespace std;

// TODO: User may want to customize the size of the dungeon
// TODO: add some more comments (minimize all to check for consistency)

// This function takes a string and returns true if and only if it contains any whitespace characters
bool stringContainsSpace(string input);

// This function prompts a user for input until a valid integer within the range is entered
int getIntFromUser(string prompt, int range);

// This function prompts a user for input until a valid word is entered
string getWordFromUser(string prompt);

// Prompts the user for input to create a room and adds it to the dungeon vector
void createRoom(vector<DungeonRoom> &dungeon);

// Takes two DungeonRoom objects and "links" them together, by having pointers set to face each other
void linkRooms(DungeonRoom &room1, DungeonRoom &room2, direction dir);

// Takes a string and returns a vector of substrings split by the given delimiter
vector<string> splitString(string input, char delimiter);

// Prints an ascii visual of the created dungeon.
void printDungeon(vector<DungeonRoom>);

// Testing some basic functionality without yet doing input validation
int main() {
    // This vector represents the rooms in the dungeon, which will be split into rows by the renderer
    vector<DungeonRoom> dungeon;

    // Prompts the user to select from the builder menu
    cout << "Welcome to Dungeon Builder!";
    string prompt = "What would you like to do?"
                    "\n[1] - Create new room"
                    "\n[2] - Link two rooms together"
                    "\n[3] - Display dungeon"
                    "\n[4] - Quit\n";
    int response = -1;

    // Handles each case with a separate function
    DungeonRoom room1, room2;
    room1 = DungeonRoom();
    room2 = DungeonRoom();
    while (response != 4) {
        response = getIntFromUser(prompt, 4);
        switch (response) {
            case 1:
                createRoom(dungeon);
                break;
            case 2:
                linkRooms(room1, room2, NORTH);
                break;
            case 3:
                printDungeon(dungeon);
                break;
        }
    }
    cout << "Thank you for using Dungeon Builder! Your finished dungeon: " << endl;
    // Prints an ascii visual of the finished dungeon
    printDungeon(dungeon);
    return 0;
}

int getIntFromUser(string prompt, int range) {
    string input;
    string excess;
    stringstream ss;
    int num;
    ss.clear();
    ss.str("");

    // Uses a string stream to process input into num
    cout << prompt;
    getline(cin, input);
    ss.str(input);
    ss >> num;

    // Checks whether the string stream could properly read from the whole string to an integer
    while (input.length() < 1 || ss.fail() || ss.peek() != EOF || num < 1 || num > range) {
        if (input.length() < 1) {
            cout << "No input. ";
        } else if (num < 1 || num > range) {
            cout << "Number not within range. ";
        } else {
            cout << "Invalid input. ";
        }
        ss.clear();
        excess = "";

        // Re-prompts user for input
        cout << prompt;
        getline(cin, input);
        ss.str(input);
        ss >> num;
    }
    return num;
}

bool stringContainsSpace(string input) {
    for (int i = 0; i < input.length(); i++)
        if (isspace(input[i]))
            return true;
    return false;
}

string getWordFromUser(string prompt) {
    string input;
    cout << prompt;
    getline(cin, input);

    // Re-prompts user for input if it contains any whitespace characters
    while (input.length() < 1 || stringContainsSpace(input)) {
        if (input.length() < 1)
            cout << "No input. ";
        else cout << "Invalid input. ";
        cout << prompt;
        getline(cin, input);
    }
    return input;
}

void createRoom(vector<DungeonRoom> &dungeon) {
    cout << "Creating room!" << endl;
    string prompt = "What is the name of this room?\n";
    string response = getWordFromUser(prompt);
}

void linkRooms(DungeonRoom &room1, DungeonRoom &room2, direction dir) {
    /*
     * TODO: Link rooms should update pointers for both rooms to point to one another.
     * If room 1 and 2 were side-by-side, room 1 should point to room 2 on its east pointer,
     * And room 2 should point to room 1 on its west pointer.
    */
    cout << "Linking rooms!" << endl;
}

vector<string> splitString(string input, char delimiter) {
    vector<string> splitVector;
    int startIndex = 0;
    for (int i = 0; i <= input.size(); i++) {
        if (input[i] == delimiter || i == input.size()) {
            string subString = input.substr(startIndex, i - startIndex);
            splitVector.push_back(subString);
            startIndex = i + 1;
        }
    }
    return splitVector;
}

void printDungeon(vector<DungeonRoom> dungeon) {
    // A default room for testing
    string defaultRoom = "--------------"
                         "\n|            |"
                         "\n|            |"
                         "\n|            |"
                         "\n|            |"
                         "\n|            |"
                         "\n--------------";
    // Split the room string by its newline characters in order to print several side-by-side.
    vector<string> split = splitString(defaultRoom, '\n');
//    char emptySpace = ' ';

    // Testing variables - will likely be user-specified
    int dungeonWidth = 6;
    int dungeonHeight = 4;
    // Print several rows of rooms on top of each other
    for (int i = 0; i < dungeonHeight; i++) {
        // Print several rooms next to each other in a single row
        for (int e = 0; e < split.size(); e++) {
            for (int w = 0; w < dungeonWidth; w++)
                cout << split[e] << " ";
            cout << endl;
        }
    }
}