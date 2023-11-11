#ifndef RACE_H
#define RACE_H

#include <vector>
#include <iostream>
#include <algorithm>
#include "vehicle.h"

class Race {
public:
    Race(int numOfPlayers);
    ~Race();
    
    void Run();
    //toString()
    friend std::ostream& operator<<(std::ostream& os, const Race& race); 

    //operators overloading
    Race& operator+=(Vehicle* vehicle);
    Race& operator-=(Vehicle* vehicle);

protected:
    int mNumOfPlayers;
    std::vector<Vehicle*> mPlayers;
};
#endif 