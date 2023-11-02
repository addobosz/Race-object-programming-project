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
