#include <iostream>
#include "vehicle.h"
#include "land.h"
#include "air.h"
#include "SuperJet.h"

int main() {
    char name[] = "elton";

    SuperJet brr = SuperJet(1,1,1,name,1,1,true);
    std::cout << brr.getTurbo() << std::endl;
}