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

void Plane::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void Plane::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void Plane::dive() {
    std::cout << "virtual";
}

std::ostream& operator<<(std::ostream& os, const Plane& plane) {
    os << static_cast<const Air&>(plane);
    os << "Wing length: " << plane.getWingLength() << std::endl;
    return os;
}