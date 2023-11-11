#ifndef SUV_H
#define SUV_H

#include "land.h"

class SUV : public Land {
public:
    SUV(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, int durability);

    int getDurability() const;

    void setDurability(int durability);

    void startEngine() override;
    void stopEngine() override;
    void speedUp() override;

    friend std::ostream& operator<<(std::ostream& os, const SUV& suv);

protected:
    int mDurability;
};

#endif
