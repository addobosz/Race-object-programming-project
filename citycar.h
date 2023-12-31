#ifndef CITYCAR_H
#define CITYCAR_H

#include "land.h"
#include <string>

class CityCar : public Land {
public:
    CityCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, const std::string& typeOfEngine);

    std::string getTypeOfEngine() const;

    void setTypeOfEngine(const std::string& typeOfEngine);

    void startEngine() override;
    void stopEngine() override;
    void speedUp() override;

    friend std::ostream& operator<<(std::ostream& os, const CityCar& citycar);

protected:
    std::string mTypeOfEngine;
};

#endif
