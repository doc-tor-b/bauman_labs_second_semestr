//
// Created by doctor on 17.02.2022.
// Лабораторная работа № 1 «Классы и объекты в С++»
// 11 Вариант
//

#include <string.h>
#include <iostream>

class Person {
public:
    Person(const char* new_name, int ag, bool gen) {
        strcpy(name, new_name);
        age = ag;
        gender = gen;
    }
    Person() {
        name[0] = '\0';
        age = 0;
        gender = 0;
    }
    Person(const Person& per) {
        strcpy(name, per.name);
        age = per.age;
        gender = per.gender;
    }
    int set_name(const char* new_name) {
        strcpy(name, new_name);
        return 0;
    }
    int set_age(int years) {
        age = years;
        return 0;
    }
    int set_gender(bool gen) {
        gender = gen;
        return 0;
    }
    const char* get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    bool get_gender() {
        return gender;
    }
private:
    char name[30];
    int age;
    bool gender;

};

int main () {
    std::string st = "test";
    Person one("Elena", 10, 0);
    Person two(one);
    one.set_name("Alex");
    one.set_age(20);
    one.set_gender(1);
    std::cout << one.get_name() << " " << one.get_age() << " " << one.get_gender() << std::endl;
    std::cout << two.get_name() << " " << two.get_age() << " " << two.get_gender() << std::endl;
    return 0;
}