#include "land.h"

Land::Land(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed)
    : Vehicle(distance, numberOfSeats, avgSpeed, name, price), mNumOfWheels(numOfWheels), mTrunk(trunk), mMaxSpeed(maxSpeed)
{}

int Land::getNumOfWheels() const {
    return mNumOfWheels;
}

bool Land::getTrunk() const {
    return mTrunk;
}

int Land::getMaxSpeed() const {
    return mMaxSpeed;
}

void Land::setNumOfWheels(int numOfWheels) {
    mNumOfWheels = numOfWheels;
}

void Land::setTrunk(bool trunk) {
    mTrunk = trunk;
}

void Land::setMaxSpeed(int maxSpeed) {
    mMaxSpeed = maxSpeed;
}