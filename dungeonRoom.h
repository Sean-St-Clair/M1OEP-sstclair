//
// Created by seans on 2/2/2023.
//

#ifndef DUNGEON_BUILDER_DUNGEONROOM_H
#define DUNGEON_BUILDER_DUNGEONROOM_H

// TODO: more meaningful comments for methods and fields
// TODO: split methods into .cpp file
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
    int getRoomWidth();

    int getRoomHeight();

    DungeonRoom *getNorthRoom();

    DungeonRoom *getEastRoom();

    DungeonRoom *getSouthRoom();

    DungeonRoom *getWestRoom();

    /*
     * Setters
     */
    void setRoomWidth(int roomWidth);

    void setRoomHeight(int roomHeight);

    void setNorthRoom(DungeonRoom &northRoom);

    void setEastRoom(DungeonRoom &eastRoom);

    void setSouthRoom(DungeonRoom &southRoom);

    void setWestRoom(DungeonRoom &westRoom);

};

#endif //DUNGEON_BUILDER_DUNGEONROOM_H
