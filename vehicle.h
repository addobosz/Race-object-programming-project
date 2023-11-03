#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle {
public:
    Vehicle(int distance, int numberOfSeats, int avgSpeed, const std::string& name, int price);

    // getters
    int getDistance() const;
    int getNumberOfSeats() const;
    int getAvgSpeed() const;
    std::string getName() const;
    int getPrice() const;

    // setters
    void setDistance(int distance);
    void setNumberOfSeats(int numberOfSeats);
    void setAvgSpeed(int avgSpeed);
    void setName(const std::string& name);
    void setPrice(int price);

    //toString()
    friend std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle); // friend is necessary because std::ostream is not a member of Vehicle class.
    

protected:
    int mDistance;
    int mNumberOfSeats;
    int mAvgSpeed;
    std::string mName;
    int mPrice;
};

#endif