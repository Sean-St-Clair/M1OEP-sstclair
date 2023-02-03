#include <iostream>

using namespace std;

// Testing some basic functionality without yet doing input validation
// (Will do input validation once we are more sure of the structure of the program / input scheme)
int main() {
    cout << "Welcome to Dungeon builder! ";

    bool creating_dungeon = true;
    string response;
    int num_rooms = 0;
    int room_width, room_height;
    while (creating_dungeon) {
        cout << "Would you like to add a room to your dungeon? [Y/N]" << endl;
        cin >> response;
        // Testing
        cout << response << endl;
        if (response == "N") {
            creating_dungeon = false;
            break;
        }
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
    return 0;
}