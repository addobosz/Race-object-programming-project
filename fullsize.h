#ifndef FULLSIZE_H
#define FULLSIZE_H

#include "land.h"

class FullSize : public Land {
public:
    FullSize(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfWheels, bool trunk, int maxSpeed, int comfort);

    int getComfort() const;

    void setComfort(int comfort);

    void startEngine() override;
    void stopEngine() override;
    void speedUp() override;

    friend std::ostream& operator<<(std::ostream& os, const FullSize& fullsize);

protected:
    int mComfort;
};

#endif
