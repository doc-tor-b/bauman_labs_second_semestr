//
// Created by doctor on 05.06.22.
//
#include "vehicle.h"
#include <iostream>
#include <vector>
int main() {
    std::vector<Vehicle*> vehicles;
    Car car("scoda", 1600, "pickup");
    Train train("electrichka", 16, 20000, electric);
    Express express("sapsan", 16, 30000, 200);

    vehicles.push_back(&car);
    vehicles.push_back(&train);
    vehicles.push_back(&express);

    int size = vehicles.size();
    for (int i = 0; i < size; ++i) {
        std::cout << i + 1 << std::endl;
        std::cout << vehicles[i]->get_name() << std::endl;
        vehicles[i]->get_description();
    }
    return 0;
}