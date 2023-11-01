#include "vehicle.h"

Vehicle::Vehicle(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price)
    : mDistance(distance), mNumberOfSeats(numberOfSeats), mAvgSpeed(avgSpeed), mName(name), mPrice(price)
{}

int Vehicle::getDistance() const {
    return mDistance;
}

int Vehicle::getNumberOfSeats() const {
    return mNumberOfSeats;
}

int Vehicle::getAvgSpeed() const {
    return mAvgSpeed;
}

std::string Vehicle::getName() const {
    return mName;
}

int Vehicle::getPrice() const {
    return mPrice;
}

void Vehicle::setDistance(int distance) {
    mDistance = distance;
}

void Vehicle::setNumberOfSeats(int numberOfSeats) {
    mNumberOfSeats = numberOfSeats;
}

void Vehicle::setAvgSpeed(int avgSpeed) {
    mAvgSpeed = avgSpeed;
}

void Vehicle::setName(const std::string& name) {
    mName = name;
}

void Vehicle::setPrice(int price) {
    mPrice = price;
}