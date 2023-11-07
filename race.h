#ifndef RACE_H
#define RACE_H

#include <vector>
#include <iostream>
#include "vehicle.h"

class Race {
public:
    Race(int numOfPlayers);

    void addPlayer(Vehicle* vehicle);
    
    //toString()
    friend std::ostream& operator<<(std::ostream& os, const Race& race); 
    

protected:
    int mNumOfPlayers;
    std::vector<Vehicle*> mPlayers;
};
#endif 