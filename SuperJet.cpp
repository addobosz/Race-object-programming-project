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

void SuperJet::startEngine() {
    std::cout << mName << "'s engine has just started!" << std::endl;
}

void SuperJet::stopEngine() {
    std::cout << mName << "'s engine has just stopped!" << std::endl;
}

void SuperJet::dive() {
    std::cout << mName << " is attempting a dive!" << std::endl;
    mDistance += 100;
}


std::ostream& operator<<(std::ostream& os, const SuperJet& superjet) {
    os << static_cast<const Air&>(superjet);
    os << "Turbo: " << superjet.getTurbo() << std::endl;
    return os;
}
