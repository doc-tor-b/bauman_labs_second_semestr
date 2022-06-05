//
// Created by doctor on 22.04.22.
//
#include "StringClass.h"

int main() {
    setlocale(LC_ALL, "Russian");
    MyString st("miau");
    MyString st2(st);
    std::cout << st2.get_MyStr() << std::endl;
    st.set_MyStr("gav mav puf tenn set");
    --st;
    std::cout << st.get_MyStr() << std::endl;
    ++st;
    MyString* string_pointer = &st2;
    std::cout << string_pointer->get_MyStr() << std::endl;
    return 0;
}