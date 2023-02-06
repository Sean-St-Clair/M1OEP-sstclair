//
// Created by seans on 2/2/2023.
//

#ifndef DUNGEON_BUILDER_DUNGEONROOM_H
#define DUNGEON_BUILDER_DUNGEONROOM_H

#include <string>
#include <vector>

using namespace std;

enum dungeonRoomSize {
    SMALL, MEDIUM, LARGE
};

enum direction {
    NORTH, EAST, SOUTH, WEST
};

struct renderInformation {
    char wall;
    char ceiling;
    char floor;
    char detail;
};

class DungeonRoom {
private:
    string name;
    dungeonRoomSize roomSize;
    renderInformation renderInfo;
    DungeonRoom *northRoom;
    DungeonRoom *eastRoom;
    DungeonRoom *southRoom;
    DungeonRoom *westRoom;
public:
    // Default Constructor
    DungeonRoom();

    // Detailed Constructor
    DungeonRoom(string name, dungeonRoomSize roomSize, renderInformation renderInfo);

    // Getters
    string getName();

    dungeonRoomSize getRoomSize();

    renderInformation getRenderInfo();

    DungeonRoom *getNorthRoom();

    DungeonRoom *getEastRoom();

    DungeonRoom *getSouthRoom();

    DungeonRoom *getWestRoom();

    // Setters
    void setName(string name);

    void setRoomSize(dungeonRoomSize roomSize);

    void setRenderInfo(renderInformation renderInfo);

    void setNorthRoom(DungeonRoom *northRoom);

    void setEastRoom(DungeonRoom *eastRoom);

    void setSouthRoom(DungeonRoom *southRoom);

    void setWestRoom(DungeonRoom *westRoom);

    // Unique methods
    // TODO: use values from struct
    // TODO: move to .cpp
    // TODO: depending on nullptrs, add "hallway" characters.

    // This method uses characters from the render info struct to generate a string
    // that represents the ascii visual of this room.
    string generateRoomVisuals() {
        string defaultRoom = "--------------"
                             "\n|            |"
                             "\n|            |"
                             "\n|            |"
                             "\n|            |"
                             "\n|            |"
                             "\n--------------";
        return defaultRoom;
    }

};

#endif //DUNGEON_BUILDER_DUNGEONROOM_H
