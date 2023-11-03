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

std::ostream& operator<<(std::ostream& os, const CityCar& citycar) {
    os << static_cast<const Land&>(citycar);
    os << "Type of engine: " << citycar.getTypeOfEngine() << std::endl;
    return os;
}