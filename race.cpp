#include <iostream>
#include "vehicle.h"
#include "land.h"

int main() {
    char name[] = "elton";
    Land brr = Land(1,1,1,name,1, 4, true, 100);
    std::cout << brr.getNumOfWheels() << std::endl;
    
}