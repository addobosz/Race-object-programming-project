#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "land.h"

class SportsCar : public Land {
public:
    SportsCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, bool amgBoost);

    bool getAmgBoost() const;

    void setAmgBoost(bool amgBoost);

    friend std::ostream& operator<<(std::ostream& os, const SportsCar& sportscar);
protected:
    bool mAmgBoost;
};

#endif
