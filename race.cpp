#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "race.h"
#include "vehicle.h"

Race::Race(int numberOfPlayers)
    : mNumOfPlayers(numberOfPlayers), mPlayers()
{
    std::string carNames[] = {
    "Aurora", "Bolt", "Circuit", "Diablo", "Echo", "Falcon", "Glide", "Horizon", "Impulse", "Jolt",
    "Komet", "Lynx", "Mystique", "Nebula", "Orbit", "Pulse", "Quantum", "Rift", "Sonic", "Titan",
    "Umbra", "Vortex", "Warp", "Xenon", "Zephyr", "Alpha", "Blaze", "Crest", "Drift", "Edge",
    "Flare", "Gusto", "Halo", "Ion", "Jet", "Kilo", "Laser", "Mach", "Nova", "Oasis",
    "Phantom", "Quartz", "Racer", "Streak", "Tempest", "Vector", "Whirl", "Xero", "Yonder", "Zenith",
    "Apex", "Beacon", "Cliff", "Dash", "Elan", "Frost", "Glacier", "Harbor", "Ivory", "Jade",
    "Krypton", "Lotus", "Meteor", "Nitro", "Onyx", "Pinnacle", "Quake", "Ripple", "Storm", "Turbine",
    "Utopia", "Vigil", "Wind", "Xcalibur", "Yellowstone", "Zion", "Azure", "Barrage", "Cascade", "Dune",
    "Ember", "Flash", "Gale", "Heirloom", "Inferno", "Journey", "Kraken", "Legend", "Mirage", "Nomad",
    "Olympus", "Phoenix", "Quest", "Rune", "Saber", "Trek", "Vanguard", "Wolf", "Xanadu", "Yacht",
    "Zealot", "Arch", "Bound", "Chase", "Dart", "Evoke", "Forge", "Glimmer", "Hawk", "Infinity"
    };

    for (int i = 0; i < mNumOfPlayers; i++) {
        
        int numberOfSeats = rand() % 8;
        int avgSpeed = rand() % 200;
        std::string name = carNames[rand() % (sizeof(carNames) / sizeof(std::string))];
        int price = rand() % 1000000;
        *this += new Vehicle(0, numberOfSeats, avgSpeed, name, price);    // Add new players using overloaded += operator 
    }
}

Race::~Race() {
    for (int i = 0; i < mPlayers.size(); i++) {
        delete mPlayers[i];
    }
    mPlayers.clear();

}

// void Race::Run() {
    
// }

Race& Race::operator+=(Vehicle* vehicle) {
    mPlayers.push_back(vehicle); 
    return *this; // Return the current instance to allow for chaining
}

Race& Race::operator-=(Vehicle* vehicle) {
    mPlayers.erase(std::remove(mPlayers.begin(), mPlayers.end(), vehicle), mPlayers.end());
    return *this; // Return the current instance to allow for chaining
}

std::ostream& operator<<(std::ostream& os, const Race& race) {
    os << "Players:" << std::endl;
    for (int i = 0; i < race.mPlayers.size(); i++) {
        os << race.mPlayers[i]->getName() << std::endl;
    }
    os << "Number of Players: " << race.mPlayers.size() << std::endl;
    return os;
}
