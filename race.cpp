#include <iostream>

class Vehicle {
public:
    Vehicle(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price):
        mDistance(distance), mNumberOfSeats(numberOfSeats), mAvgSpeed(avgSpeed), mName(name), mPrice(price)
    {}
};

int main() {
    char name[] = "elton";
    Vehicle brr = Vehicle(1,1,1,name,1);
    std::cout << brr.distance;
    
}