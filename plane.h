#ifndef Plane_H
#define Plane_H

#include "air.h"

class Plane : public Air {
public:
    Plane(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines, int wingLength);

    int getWingLength() const;

    void setWingLength(int wingLength);
    

protected:
    int mWingLength;
};

#endif 