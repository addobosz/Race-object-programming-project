#include "suv.h"

SUV::SUV(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, int durability)
    : Land(distance, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed), mDurability(durability)
{}

int SUV::getDurability() const {
    return mDurability;
}

void SUV::setDurability(int durability) {
    mDurability = durability;
}

void SUV::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void SUV::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void SUV::speedUp() {
    std::cout << mName << " is speeding up!" << std::endl;
    mAvgSpeed += 40;
}

std::ostream& operator<<(std::ostream& os, const SUV& suv) {
    os << static_cast<const Land&>(suv);
    os << "Durability: " << suv.getDurability() << std::endl;
    return os;
}