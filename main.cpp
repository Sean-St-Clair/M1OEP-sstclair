#include <iostream>

using namespace std;

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
    int num_rooms = 0;
    int room_width, room_height;
    while (response != 4) {
        cout << prompt << endl;
        cin >> response;
        // Testing
        cout << response << endl;
        if (response == 4)
            break;
        if (num_rooms == 0)
            cout << "Creating your first room!" << endl;
        cout << "Please enter an integer for the room width." << endl;
        cin >> room_width;
        cout << "Please enter an integer for the room height." << endl;
        cin >> room_height;
        cout << "Your room's dimensions are " << room_width << " x " << room_height << "." << endl;
        num_rooms++;
        cout << "There are now " << num_rooms << " rooms." << endl;
        cout << "What would you like to do? (1 - create room, 2 - copy, 3 link two rooms)" << endl;
    }
    cout << "Thank you for using Dungeon Builder! Your finished dungeon: " << endl;
    // Print out an ascii visual of the dungeon
    // Will limit the dimensions of the rooms so all prints out accordingly.
    return 0;
}