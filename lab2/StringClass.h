//
// Created by doctor on 22.04.22.
//

#ifndef STRINGCLASS_H
#define STRINGCLASS_H

#include <cstring>
#include <iostream>

class MyString {
    std::string MyStr;
public:
    MyString();
    MyString(const char* new_string);
    MyString(const MyString& st);
    ~MyString();

    int set_MyStr(const char* new_string);
    std::string get_MyStr() const;
    void operator--();
    void operator++();
};

#endif //STRINGCLASS_H
