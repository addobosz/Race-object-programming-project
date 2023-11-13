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
    int num_of_players;
    
    std::cout << "Welcome to the Race Game!" << std::endl;
    std::cout << "Enter the number of players:" << std::endl;
    std::cin >> num_of_players;

    Race<Vehicle> race(num_of_players);
    std::cout << race;

    race.Run();

    return 0;
}
