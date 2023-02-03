//
// Created by seans on 2/2/2023.
//

#include "dungeonRoom.h"

int DungeonRoom::getRoomWidth() {
    return roomWidth;
}

int DungeonRoom::getRoomHeight() {
    return roomHeight;
}

DungeonRoom *DungeonRoom::getNorthRoom() {
    return northRoom;
}

DungeonRoom *DungeonRoom::getEastRoom() {
    return eastRoom;
}

DungeonRoom *DungeonRoom::getSouthRoom() {
    return southRoom;
}

DungeonRoom *DungeonRoom::getWestRoom() {
    return westRoom;
}

void DungeonRoom::setRoomWidth(int roomWidth) {
    this->roomWidth = roomWidth;
}

void DungeonRoom::setRoomHeight(int roomHeight) {
    this->roomHeight = roomHeight;
}

// TODO: Make sure the pointer syntax is actually correct
void DungeonRoom::setNorthRoom(DungeonRoom &northRoom) {
    this->northRoom = &northRoom;
}

void DungeonRoom::setEastRoom(DungeonRoom &eastRoom) {
    this->eastRoom = &eastRoom;
}

void DungeonRoom::setSouthRoom(DungeonRoom &southRoom) {
    this->southRoom = &southRoom;
}

void DungeonRoom::setWestRoom(DungeonRoom &westRoom) {
    this->westRoom = &westRoom;
}
