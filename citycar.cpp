#include "citycar.h"

CityCar::CityCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, const std::string& typeOfEngine)
    : Land(distance, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed), mTypeOfEngine(typeOfEngine)
{}

std::string CityCar::getTypeOfEngine() const {
    return mTypeOfEngine;
}

void CityCar::setTypeOfEngine(const std::string& typeOfEngine) {
    mTypeOfEngine = typeOfEngine;
}

void CityCar::startEngine() {
    std::cout << mName << "'s engine has started!" << std::endl;
}

void CityCar::stopEngine() {
    std::cout << mName << "'s engine has stopped!" << std::endl;
}

void CityCar::speedUp() {
    std::cout << "virtual";
}

std::ostream& operator<<(std::ostream& os, const CityCar& citycar) {
    os << static_cast<const Land&>(citycar);
    os << "Type of engine: " << citycar.getTypeOfEngine() << std::endl;
    return os;
}