#include <vector>
#include "race.h"
#include "vehicle.h"

Race::Race(int numberOfPlayers, std::vector<Vehicle*> players)
    : mNumOfPlayers(numberOfPlayers), mPlayers(players)
{}

void Race::addPlayer(Vehicle* vehicle) {
    mPlayers.push_back(vehicle);
}

std::ostream& operator<<(std::ostream& os, const Race& race) {
    os << "Players:" << std::endl;
    for (int i = 0; i < race.mPlayers.size(); i++) {
        os << race.mPlayers[i]->getName() << std::endl;
    }
}