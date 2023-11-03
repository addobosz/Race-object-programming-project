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

std::ostream& operator<<(std::ostream& os, const FullSize& fullsize) {
    os << static_cast<const Land&>(fullsize);
    os << "Comfort: " << fullsize.getComfort() << std::endl;
    return os;
}