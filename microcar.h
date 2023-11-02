#ifndef MICROCAR_H
#define MICROCAR_H

#include "land.h"

class MicroCar : public Land {
public:
    MicroCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, bool agile);

    bool getAgile() const;

    void setAgile(bool agile);
    

protected:
    bool mAgile;
};

#endif 