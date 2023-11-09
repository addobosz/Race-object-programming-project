#include <iostream>
#include <vector>
#include "race.h"
#include "vehicle.h"

Race::Race(int numberOfPlayers)
    : mNumOfPlayers(numberOfPlayers), mPlayers()
{
    for (int i = 0; i < mNumOfPlayers; i++) {
        *this += new Vehicle(1,1,1,"elooo", 100);    // Add new players using overloaded += operator 
    }
}


// void Race::Run() {
    
// }

Race& Race::operator+=(Vehicle* vehicle) {
    mPlayers.push_back(vehicle); 
    return *this; // Return the current instance to allow for chaining
}

// Race& Race::operator-=(Vehicle* vehicle) {
    
// }

std::ostream& operator<<(std::ostream& os, const Race& race) {
    os << "Players:" << std::endl;
    for (int i = 0; i < race.mNumOfPlayers; i++) {
        os << race.mPlayers[i]->getName() << std::endl;
    }
    os << race.mNumOfPlayers << std::endl;
}