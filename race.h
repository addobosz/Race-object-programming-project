#ifndef RACE_H
#define RACE_H

#include <vector>
#include <iostream>
#include <algorithm>
#include "vehicle.h"

template <class T>
class Race {
public:
    Race(int numOfPlayers);
    ~Race();
    
    void Run();
    //toString()
    template <class U> 
    friend std::ostream& operator<<(std::ostream& os, const Race<U>& race); 

    //operators overloading
    Race& operator+=(T* vehicle);
    Race& operator-=(T* vehicle);

protected:
    int mNumOfPlayers;
    std::vector<T*> mPlayers;
};

#include "race.tpp"
#endif 