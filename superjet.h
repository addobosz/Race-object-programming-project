#ifndef SUPERJET_H
#define SUPERJET_H

#include "air.h"

class SuperJet : public Air {
public:
    SuperJet(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price, int numOfEngines, bool turbo);

    bool getTurbo() const;

    void setTurbo(bool turbo);
    

protected:
    bool mTurbo;
};

#endif 