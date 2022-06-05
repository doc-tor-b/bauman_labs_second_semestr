//
// Created by doctor on 22.04.22.
//

#include "StringClass.h"
#include <vector>
#include <sstream>

MyString::MyString() {
    MyStr = "None";
    std::cout << "Вызван конструктор объекта без параметров " << MyStr << std::endl;
}

MyString::MyString(const char* new_string) : MyStr(new_string) {
    std::cout << "Вызван конструктор объекта с параметрами " << MyStr << std::endl;
}


MyString::MyString(const MyString& st) : MyStr(st.MyStr) {
    std::cout << "Вызван конструктор копирования " << MyStr << std::endl;
}

MyString::~MyString() {
    std::cout << "Вызван деструктор объекта " << MyStr << std::endl;
}

std::string MyString::get_MyStr() const {
    return MyStr;
}

int MyString::set_MyStr(const char *new_string) {
    MyStr = new_string;
    return 0;
}

void MyString::operator--() {
    int n = MyStr.length() - 1;
    char temp = '\0';
    for (int i = 0; i < n / 2; ++i) {
        temp = MyStr[i];
        MyStr[i] = MyStr[n - i];
        MyStr[n - i] = temp;
    }
}

void MyString::operator++() {
    std::vector <std::string> vecstr;
    std::string word;
    std::stringstream s(MyStr);

    while (s >> word) vecstr.push_back(word);
    int vsize = vecstr.size();
    int max_lenth = 0;
    int max_lenth_index = 0;
    for (int i = 0; i < vsize; i++) {
        if (vecstr[i].length() > max_lenth) {
            max_lenth = vecstr[i].length();
            max_lenth_index = 1;
        }
    }
    std::cout << vecstr[max_lenth_index] << std::endl;
}