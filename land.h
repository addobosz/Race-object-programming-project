#ifndef LAND_H
#define LAND_H

#include "vehicle.h"

class Land : public Vehicle {
public:
    Land(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed);

    int getNumOfWheels() const;
    bool getTrunk() const;
    int getMaxSpeed() const;

    void setNumOfWheels(int numOfWheels);
    void setTrunk(bool trunk);
    void setMaxSpeed(int maxSpeed);

    virtual void speedUp() = 0;
    
    friend std::ostream& operator<<(std::ostream& os, const Land& land);

protected:
    int mNumOfWheels;
    bool mTrunk;
    int mMaxSpeed;
};

#endif 