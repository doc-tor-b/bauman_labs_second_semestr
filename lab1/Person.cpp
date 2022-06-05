//
// Created by doctor on 22.04.22.
//

#include "Person.h"

Person::Person() {
    name = new char[30];
    name[0] = '\0';
    std::cout << "Вызван конструктор объекта без параметров " << name << std::endl;
}

Person::Person(const char* new_name, int ag, bool gen) : age(ag), gender(gen) {
    name = new char[30];
    strcpy(name, new_name);
    std::cout << "Вызван конструктор объекта с параметрами " << name << std::endl;
}


Person::Person(const Person& per) : age(per.age), gender(per.gender) {
    name = new char[30];
    strcpy(name, per.name);
    std::cout << "Вызван конструктор копирования " << name << std::endl;
}

Person::~Person() {
    std::cout << "Вызван деструктор объекта " << name << std::endl;
    delete [] name;
}

int Person::set_name(const char* new_name) {
    strcpy(name, new_name);
    return 0;
}

int Person::set_age(int years) {
    age = years;
    return 0;
}

int Person::set_gender(bool gen) {
    gender = gen;
    return 0;
}

const char* Person::get_name() const {
    return name;
}

int Person::get_age() const {
    return age;
}

bool Person::get_gender() const {
    return gender;
}
