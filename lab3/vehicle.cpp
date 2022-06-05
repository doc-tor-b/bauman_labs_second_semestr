//
// Created by doctor on 05.06.22.
//
#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string name, int n_of_w, int weig): Name(name), number_of_wheels(n_of_w), weight(weig) {}

std::string Vehicle::get_name() const {
    return Name;
}

int Vehicle::get_number_of_wheels() const {
    return number_of_wheels;
}

int Vehicle::get_weight() const {
    return weight;
}

void Vehicle::set_name(std::string na) {
    Name = na;
}

void Vehicle::set_number_of_wheels(int n_of_w) {
    number_of_wheels = n_of_w;
}

void Vehicle::set_weight(int weig) {
    weight = weig;
}

std::string Car::get_body() const {
    return body;
}

void Car::set_body(std::string bod) {
    body = bod;
}

Car::Car(std::string name, int weig, std::string bod) : Vehicle(name, 4, weig) {body = bod;}

type_of_engine Train::get_engine() const {
    return engine;
}

void Train::set_engine(type_of_engine eng) {
    engine = eng;
}

Train::Train(std::string name, int n_of_w, int weig, type_of_engine eng) : Vehicle(name, n_of_w, weig) {engine = eng;}

Express::Express(std::string name, int n_of_w, int weig, int max_s) : Vehicle(name, n_of_w, weig) {max_speed = max_s;}

int Express::get_max_speed() const {
    return max_speed;
}

void Express::set_max_speed(int max) {
    max_speed = max;
}

void Car::get_description() {
    std::cout << "four-wheeled ground transport" << std::endl;
}

void Train::get_description() {
    std::cout << "coupled together carriages for traveling by rail" << std::endl;
}

void Express::get_description() {
    std::cout << "train, ship, bus and other means of transport for long-distance travel with"
                 " increased speed against the usual and fewer stops." << std::endl;
}