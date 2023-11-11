#ifndef Plane_H
#define Plane_H

#include "air.h"

class Plane : public Air {
public:
    Plane(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines, int wingLength);

    int getWingLength() const;

    void setWingLength(int wingLength);

    void startEngine() override;
    void stopEngine() override;
    void dive() override;
    
    friend std::ostream& operator<<(std::ostream& os, const Plane& plane);

protected:
    int mWingLength;
};

#endif 