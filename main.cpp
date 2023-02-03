#include <iostream>
#include <vector>
#include "dungeonRoom.h"

using namespace std;

/*
 * Prompts the user for input to create a room and specify its dimensions
 */
void createRoom();

/*
 * Takes the given dungeon and returns a copy of it (having the same fields but its own space in memory)
 */
DungeonRoom copyRoom();

/*
 * "Links" the two rooms by placing room2 next to room1 in accordance with the given direction
 */
void linkRooms(DungeonRoom &room1, DungeonRoom &room2, int direction);

/*
 * Takes a string and returns a vector of substrings split by the given delimiter
 */
vector<string> splitString(string input, char delimiter);

/*
 * Prints an ascii visual of the created dungeon.
 */
void printDungeon();

// Testing some basic functionality without yet doing input validation
// TODO: input validation once we are more sure of the structure of the program / input scheme
// TODO: restrict the room dimensions to fall within a maximum cell size on grid space
int main() {
    cout << "Welcome to Dungeon Builder! ";

    string prompt = "What would you like to do?"
                    "\n[1] - Create new room"
                    "\n[2] - Copy existing room"
                    "\n[3] - Link two rooms together"
                    "\n[4] - Quit";
    int response = 0;
    int numRooms = 0;
    while (response != 4) {
        cout << prompt << endl;
        cin >> response;
        // Testing
        cout << response << endl;
        switch (response) {
            case 1:
                if (numRooms == 0)
                    cout << "Creating your first room!" << endl;
                createRoom();
                numRooms++;
                cout << "There are now " << numRooms << " rooms." << endl;
                break;
            case 2:
                copyRoom();
                numRooms++;
                cout << "There are now " << numRooms << " rooms." << endl;
                // TODO: dedicated "add rooms" function
                break;
            case 3:
                cout << "Linking rooms!";
                break;
            default:
                cout << "Invalid input. Enter 1-4" << endl;
                break;
        }
    }
    cout << "Thank you for using Dungeon Builder! Your finished dungeon: " << endl;
    // Prints an ascii visual of the finished dungeon
    printDungeon();
    return 0;
}

void createRoom() {
    int roomWidth, roomHeight;
    cout << "Please enter an integer for the room width." << endl;
    cin >> roomWidth;
    cout << "Please enter an integer for the room height." << endl;
    cin >> roomHeight;
    cout << "Your room's dimensions are " << roomWidth << " x " << roomHeight << "." << endl;
}

DungeonRoom copyRoom() {
    /*
     * TODO: Copy room functionality:
     * 1.) Create a default constructor that properly sets default values
     * 2.) Create a constructor taking just dimensions as arguments
     * 3.) Create a constructor taking another DungeonRoom as an argument (I guess a copy constructor)
     */
    cout << "Copying room!" << endl;
}

void linkRooms(DungeonRoom &room1, DungeonRoom &room2, int direction) {
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

void printDungeon() {
    // A default room for testing
    string defaultRoom = "----------"
                         "\n|        |"
                         "\n|        |"
                         "\n|        |"
                         "\n----------";
    // Split the room string by its newline characters in order to print several side-by-side.
    vector<string> split = splitString(defaultRoom, '\n');

    // Testing variables - will likely be user-specified
    int dungeonWidth = 5;
    int dungeonHeight = 3;
    // Print several rows of rooms on top of each other
    for (int i = 0; i < dungeonHeight; i++) {
        // Print several rooms next to each other in a single row
        for (int e = 0; e < split.size() - 1; e++) {
            for (int w = 0; w < dungeonWidth; w++)
                cout << split[e];
            cout << endl;
        }
        if (i == dungeonHeight - 1)
            for (int w = 0; w < dungeonWidth; w++)
                cout << split[split.size() - 1];
    }
}