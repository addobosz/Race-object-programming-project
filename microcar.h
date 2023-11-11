#ifndef MICROCAR_H
#define MICROCAR_H

#include "land.h"

class MicroCar : public Land {
public:
    MicroCar(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, bool agile);

    bool getAgile() const;

    void setAgile(bool agile);

    void startEngine() override;
    void stopEngine() override;
    void speedUp() override;
    
    friend std::ostream& operator<<(std::ostream& os, const MicroCar& MicroCar);
    
protected:
    bool mAgile;
};

#endif 