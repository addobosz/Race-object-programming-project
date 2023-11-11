#include "fullsize.h"

FullSize::FullSize(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, int comfort)
    : Land(distance, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed), mComfort(comfort)
{}

int FullSize::getComfort() const {
    return mComfort;
}

void FullSize::setComfort(int comfort) {
    mComfort = comfort;
}

void FullSize::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void FullSize::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void FullSize::speedUp() {
    std::cout << mName << " is speeding up!" << std::endl;
    mAvgSpeed += 40;
}

std::ostream& operator<<(std::ostream& os, const FullSize& fullsize) {
    os << static_cast<const Land&>(fullsize);
    os << "Comfort: " << fullsize.getComfort() << std::endl;
    return os;
}