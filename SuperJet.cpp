#include "SuperJet.h"

SuperJet::SuperJet(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines, bool turbo)
    : Air(distance, numberOfSeats, avgSpeed, name, price, numOfEngines), mTurbo(turbo)
{}

bool SuperJet::getTurbo() const {
    return mTurbo;
}

void SuperJet::setTurbo(bool turbo) {
    mTurbo = turbo;
}

