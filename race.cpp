#include <iostream>
#include "vehicle.h"
#include "land.h"
#include "air.h"
#include "superjet.h"
#include "plane.h"
#include "microcar.h"
#include "suv.h"
#include "sportscar.h"
#include "citycar.h"
#include "fullsize.h"

int main() {
    char name[] = "elton";

    MicroCar brr = MicroCar(1,1,1,name,10, 1,1,1, true);
    std::cout << brr;
}