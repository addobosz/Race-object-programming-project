#include "air.h"

Air::Air(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines)
    : Vehicle(distance, numberOfSeats, avgSpeed, name, price), mNumOfEngines(numOfEngines)
{}

int Air::getNumOfEngines() const {
    return mNumOfEngines;
}

void Air::setNumOfEngines(int numOfEngines) {
    mNumOfEngines = numOfEngines;
}

