#include "plane.h"

Plane::Plane(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines, int wingLength)
    : Air(distance, numberOfSeats, avgSpeed, name, price, numOfEngines), mWingLength(wingLength)
{}

int Plane::getWingLength() const {
    return mWingLength;
}

void Plane::setWingLength(int wingLength) {
    mWingLength = wingLength;
}

