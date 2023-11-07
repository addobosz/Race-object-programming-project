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
#include "race.h"

int main() {
    char name[] = "elton";

    MicroCar brr = MicroCar(1,1,1,name,10, 1,1,1, true);
    std::cout << brr;
    Vehicle* brr_pointer = &brr;
    Race race = Race(5);
    for (int i = 0; i < 5; i++) {

        race.addPlayer(brr_pointer);
    }
    std::cout << race;
}