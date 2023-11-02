#ifndef AIR_H
#define AIR_H

#include "vehicle.h"

class Air : public Vehicle {
public:
    Air(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines);

    int getNumOfEngines() const;

    void setNumOfEngines(int numOfEngines);
    

protected:
    int mNumOfEngines;
};

#endif 