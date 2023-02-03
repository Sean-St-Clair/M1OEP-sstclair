#include <iostream>
#include <vector>

using namespace std;

/*
 * Takes a string and returns a vector of substrings split by the given delimiter
 */
vector<string> splitString(string input, char delimiter);

/*
 * Prints an ascii visual of the created dungeon.
 */
void printDungeon();

// Testing some basic functionality without yet doing input validation
// (Will do input validation once we are more sure of the structure of the program / input scheme)
int main() {
    cout << "Welcome to Dungeon Builder! ";

    string prompt = "What would you like to do?"
                    "\n[1] - Create new room"
                    "\n[2] - Copy existing room"
                    "\n[3] - Link two rooms together"
                    "\n[4] - Quit";
    int response = 0;
    int numRooms = 0;
    int roomWidth, roomHeight;
    while (response != 4) {
        cout << prompt << endl;
        cin >> response;
        // Testing
        cout << response << endl;
        if (response == 4)
            break;
        if (numRooms == 0)
            cout << "Creating your first room!" << endl;
        cout << "Please enter an integer for the room width." << endl;
        cin >> roomWidth;
        cout << "Please enter an integer for the room height." << endl;
        cin >> roomHeight;
        cout << "Your room's dimensions are " << roomWidth << " x " << roomHeight << "." << endl;
        numRooms++;
        cout << "There are now " << numRooms << " rooms." << endl;
    }
    cout << "Thank you for using Dungeon Builder! Your finished dungeon: " << endl;
    printDungeon();
    // Print out an ascii visual of the dungeon
    // Will limit the dimensions of the rooms so all prints out accordingly.
    return 0;
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
    int dungeonWidth = 5;
    int dungeonHeight = 3;
    // A default room for testing
    string defaultRoom = "----------"
                         "\n|        |"
                         "\n|        |"
                         "\n|        |"
                         "\n----------";
    // Split the room string by its newline characters in order to print several side-by-side.
    vector<string> split = splitString(defaultRoom, '\n');

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