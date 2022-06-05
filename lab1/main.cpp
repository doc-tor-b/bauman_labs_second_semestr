//
// Created by doctor on 17.02.2022.
// Лабораторная работа № 1 «Классы и объекты в С++»
// 11 Вариант
//

#include "Person.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::string st = "test";
    {
        Person test("test", 55, 1);
    }
    Person one("Elena", 10, 0);
    Person two(one);
    one.set_name("Alex");
    one.set_age(20);
    one.set_gender(1);
    Person* person_pointer = &two;
    std::cout << one.get_name() << " " << one.get_age() << " " << one.get_gender() << std::endl;
    std::cout << person_pointer->get_name() << " " << person_pointer->get_age() << " " << person_pointer->get_gender() << std::endl;

    return 0;
}