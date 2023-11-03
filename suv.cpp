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

std::ostream& operator<<(std::ostream& os, const SUV& suv) {
    os << static_cast<const Land&>(suv);
    os << "Durability: " << suv.getDurability() << std::endl;
    return os;
}