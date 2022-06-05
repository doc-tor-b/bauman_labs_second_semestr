//
// Created by doctor on 22.04.22.
//

#ifndef PERSON_H
#define PERSON_H

#include <cstring>
#include <iostream>

class Person {
    char* name;
    int age = 0;
    bool gender = 0;
public:
    Person();
    Person(const char* new_name, int ag, bool gen);
    Person(const Person& per);
    ~Person();

    int set_name(const char* new_name);
    int set_age(int years);
    int set_gender(bool gen);
    const char* get_name() const;

    int get_age() const;
    bool get_gender() const;
};

#endif //PERSON_H
