//
// Created by seans on 2/2/2023.
//

#ifndef DUNGEON_BUILDER_DUNGEONROOM_H
#define DUNGEON_BUILDER_DUNGEONROOM_H

// TODO: more meaningful comments for methods and fields
class DungeonRoom {
private:
    int roomWidth;
    int roomHeight;
    DungeonRoom *northRoom;
    DungeonRoom *eastRoom;
    DungeonRoom *southRoom;
    DungeonRoom *westRoom;
public:
    /*
     * Default constructor
     */
    DungeonRoom();

    /*
     * Getters
     */
    int getRoomWidth() {
        return roomWidth;
    }

    int getRoomHeight() {
        return roomHeight;
    }

    DungeonRoom *getNorthRoom() {
        return northRoom;
    }

    DungeonRoom *getEastRoom() {
        return eastRoom;
    }

    DungeonRoom *getSouthRoom() {
        return southRoom;
    }

    DungeonRoom *getWestRoom() {
        return westRoom;
    }

    /*
     * Setters
     */
    void setRoomWidth(int roomWidth) {
        this->roomWidth = roomWidth;
    }

    void setRoomHeight(int roomHeight) {
        this->roomHeight = roomHeight;
    }

    // TODO: Make sure the pointer syntax is actually correct
    void setNorthRoom(DungeonRoom &northRoom) {
        this->northRoom = &northRoom;
    }

    void setEastRoom(DungeonRoom &eastRoom) {
        this->eastRoom = &eastRoom;
    }

    void setSouthRoom(DungeonRoom &southRoom) {
        this->southRoom = &southRoom;
    }

    void setWestRoom(DungeonRoom &westRoom) {
        this->westRoom = &westRoom;
    }

};

#endif //DUNGEON_BUILDER_DUNGEONROOM_H
