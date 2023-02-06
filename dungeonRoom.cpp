//
// Created by seans on 2/2/2023.
//

#include "dungeonRoom.h"

DungeonRoom::DungeonRoom() {

}

string DungeonRoom::getName() {
    return name;
}

dungeonRoomSize DungeonRoom::getRoomSize() {
    return roomSize;
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

void DungeonRoom::setName(std::string name) {
    this->name = name;
}

void DungeonRoom::setRoomSize(dungeonRoomSize roomSize) {
    this->roomSize = roomSize;
}

void DungeonRoom::setNorthRoom(DungeonRoom *northRoom) {
    this->northRoom = northRoom;
}

void DungeonRoom::setEastRoom(DungeonRoom *eastRoom) {
    this->eastRoom = eastRoom;
}

void DungeonRoom::setSouthRoom(DungeonRoom *southRoom) {
    this->southRoom = southRoom;
}

void DungeonRoom::setWestRoom(DungeonRoom *westRoom) {
    this->westRoom = westRoom;
}
