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

int welcome_message() {
    int num_of_players;
    std::cout << "Welcome to the Race Game!" << std::endl;
    std::cout << "Enter the number of players:" << std::endl;
    std::cin >> num_of_players;
    return num_of_players;
}


int main() {
    Race race = Race(welcome_message());
    char name[] = "elton";

    MicroCar brr = MicroCar(1,1,1,name,10, 1,1,1, true);
    std::cout << brr;
    Vehicle* brr_reference = &brr;
    std::cout << race;
    race += brr_reference;
    std::cout << race;
    race -= brr_reference;
    std::cout << race;
}
