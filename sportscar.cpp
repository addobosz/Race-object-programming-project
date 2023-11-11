#include "sportscar.h"

SportsCar::SportsCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, bool amgBoost)
    : Land(distance, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed), mAmgBoost(amgBoost)
{}

bool SportsCar::getAmgBoost() const {
    return mAmgBoost;
}

void SportsCar::setAmgBoost(bool amgBoost) {
    mAmgBoost = amgBoost;
}

void SportsCar::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void SportsCar::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void SportsCar::speedUp() {
    std::cout << "virtual";
}

std::ostream& operator<<(std::ostream& os, const SportsCar& sportscar) {
    os << static_cast<const Land&>(sportscar);
    os << "AMG Boost: " << sportscar.getAmgBoost() << std::endl;
    return os;
}