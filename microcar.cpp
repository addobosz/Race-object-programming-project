#include "microcar.h"

MicroCar::MicroCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, bool agile)
    : Land(distance, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed), mAgile(agile)
{}

bool MicroCar::getAgile() const {
    return mAgile;
}

void MicroCar::setAgile(bool agile) {
    mAgile = agile;
}

void MicroCar::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void MicroCar::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void MicroCar::speedUp() {
    std::cout << "virtual";
}

std::ostream& operator<<(std::ostream& os, const MicroCar& microcar) {
    os << static_cast<const Land&>(microcar);
    os << "Agile: " << microcar.getAgile() << std::endl;
    return os;
}
