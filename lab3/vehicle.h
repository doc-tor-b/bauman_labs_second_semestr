//
// Created by doctor on 05.06.22.
//
#include <string>

#ifndef VEHICLE_H
#define VEHICLE_H

enum type_of_engine {
    electric,
    diesel
};

class Vehicle {
protected:
    std::string Name;
    int number_of_wheels;
    int weight;
public:
    Vehicle(std::string name, int n_of_w, int weig);
    std::string get_name() const;
    int get_number_of_wheels() const;
    int get_weight() const;
    void set_name(std::string na);
    void set_number_of_wheels(int n_of_w);
    void set_weight(int weig);
    virtual void get_description() = 0;
};

class Car : public Vehicle {
    std::string body;
public:
    Car(std::string name, int weig, std::string bod);
    std::string get_body() const;
    void set_body(std::string bod);
    void get_description();
};

class Train : public Vehicle {
protected:
    type_of_engine engine;
public:
    Train(std::string name, int n_of_w, int weig, type_of_engine eng);
    type_of_engine get_engine() const;
    void set_engine(type_of_engine eng);
    void get_description();
};

class Express : public Vehicle {
protected:
    int max_speed;
public:
    Express(std::string name, int n_of_w, int weig, int max_s);
    int get_max_speed() const;
    void set_max_speed(int max);
    void get_description();
};

#endif //VEHICLE_H
