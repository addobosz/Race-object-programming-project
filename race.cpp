#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "race.h"
#include "vehicle.h"
#include "citycar.h"
#include "fullsize.h"
#include "microcar.h"
#include "plane.h"
#include "sportscar.h"
#include "superjet.h"
#include "suv.h"

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
        int vehicleType = rand() % 7;
        int numOfWheels = (1 + rand() % 3)*2;
        bool trunk = rand() % 2;
        int maxSpeed = avgSpeed * (3 + rand() % 4)/2; // at least 1.5x avgSpeed and at max 2.5x avgSpeed.
        bool agile = rand() % 2;
        int durability = 1 + rand() % 100;
        bool amgBoost = rand() % 2;
        int typeOfEngineInt = rand() % 3;
        std::string typeOfEngine;
        if (typeOfEngineInt == 0) {
            typeOfEngine = "Diesel engine";
        } else if (typeOfEngineInt == 1) {
            typeOfEngine = "Petrol engine";
        } else {
            typeOfEngine = "Electric engine";
        }
        int comfort = 1 + rand() % 100;
        int numOfEngines = 1 + rand() % 4;
        bool turbo = rand() % 2;
        int wingLength = 10 + rand() % 41;

        // Add vehicle to the race depending on the vehicleType randomly chosen. Perform this operation using overloaded += operator.
        if (vehicleType == 0) {
        *this += new MicroCar(0, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed, agile);
        } else if (vehicleType == 1) {
            *this += new SUV(0, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed, durability);
        } else if (vehicleType == 2) {
            *this += new SportsCar(0, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed, amgBoost);
        } else if (vehicleType == 3) {
            *this += new CityCar(0, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed, typeOfEngine);
        } else if (vehicleType == 4) {
            *this += new FullSize(0, numberOfSeats, avgSpeed, name, price, numOfWheels, trunk, maxSpeed, comfort);
        } else if (vehicleType == 5) {
            *this += new SuperJet(0, numberOfSeats, avgSpeed, name, price, numOfEngines, turbo);
        } else if (vehicleType == 6) {
            *this += new Plane(0, numberOfSeats, avgSpeed, name, price, numOfEngines, wingLength);
        }
    }
}

Race::~Race() {
    for (int i = 0; i < mPlayers.size(); i++) {
        delete mPlayers[i];
    }
    mPlayers.clear();

}

void Race::Run() {
    int numOfTurns = 1 + rand() % 100;

    // Start the engines
    for (Vehicle* player : mPlayers) {
        player->startEngine();
    }

    for (int turn = 1; turn <= numOfTurns; turn++) {
        std::cout << std::endl << "---- turn " << turn << " ----" << std::endl;
        for (Vehicle* player : mPlayers) {
            player->setDistance(player->getDistance() + player->getAvgSpeed());

            // Every turn, each player has 10% chance of using its unique ability.
            int chance = rand() % 10;
            if (chance == 0) {
                // Below is the way of checking whether the vehicle is land or air. Depending on that, the special ability might be used. 
                Land* landVehicle = dynamic_cast<Land*>(player);
                if (landVehicle != nullptr) {
                    landVehicle->speedUp();
                }
                Air* airVehicle = dynamic_cast<Air*>(player);
                if (airVehicle != nullptr) {
                    airVehicle->dive();
                }
            }
        } 
    }

    // Stop the engines
    for (Vehicle* player : mPlayers) {
        player->stopEngine();
    } 
    
    std::sort(mPlayers.begin(), mPlayers.end(), [](Vehicle* a, Vehicle* b) {
        return a->getDistance() > b->getDistance();
    });

    std::cout << std::endl <<  "~~~~ The Race has finished! ~~~~" << std::endl;
    for (int i = 0; i < mPlayers.size(); i++) {
        std::cout << "#" << i+1 << " " << mPlayers[i]->getName() << " - Distance: " << mPlayers[i]->getDistance() << std::endl;
    }
}

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
    os << "Number of Players: " << race.mPlayers.size() << std::endl << std::endl;
    return os;
}
