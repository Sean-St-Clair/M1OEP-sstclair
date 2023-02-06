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

class DungeonRoom {
private:
    string name;
    dungeonRoomSize roomSize;
    DungeonRoom *northRoom;
    DungeonRoom *eastRoom;
    DungeonRoom *southRoom;
    DungeonRoom *westRoom;
    struct {
        char wall;
        char ceiling;
        char floor;
        char detail;
    } renderInfo;
public:
    // Default Constructor
    DungeonRoom();

    // Getters
    string getName();

    dungeonRoomSize getRoomSize();

    DungeonRoom *getNorthRoom();

    DungeonRoom *getEastRoom();

    DungeonRoom *getSouthRoom();

    DungeonRoom *getWestRoom();

    // Setters
    void setName(string name);

    void setRoomSize(dungeonRoomSize roomSize);

    void setNorthRoom(DungeonRoom *northRoom);

    void setEastRoom(DungeonRoom *eastRoom);

    void setSouthRoom(DungeonRoom *southRoom);

    void setWestRoom(DungeonRoom *westRoom);

    // Unique methods
    // TODO: use values from struct
    string generateRoomVisuals() {
        string defaultRoom = "----------"
                             "\n|        |"
                             "\n|        |"
                             "\n|        |"
                             "\n----------";
        return defaultRoom;
    }

};

#endif //DUNGEON_BUILDER_DUNGEONROOM_H
