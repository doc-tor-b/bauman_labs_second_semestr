//
// Created by doctor on 05.06.22.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>

template<class T>
class Stack{
public:
    class Node{
    public:
        T value;
        Node* prev_node;
    };
    Node* zero_node;
    Node* current_node;
    Stack() {
        zero_node = new Node;
        zero_node->prev_node = nullptr;
        current_node = zero_node;
    };
    void push_back(const T& val) {
        Node* temp_point = new Node{val, current_node};
        current_node = temp_point;
    }
    T pop_back(){
        T val = current_node->value;
        Node* temp_point = current_node;
        current_node = current_node->prev_node;
        delete temp_point;
        return val;
    }
    T operator--() {
        return pop_back();
    }

    void operator/(const T& val) {
        push_back(val);
    }
    operator bool() const{
        if (current_node == zero_node) {
            return false;
        }
        return true;
    }
    Stack<T>& operator=(const Stack<T>& old) {
        Node* temp_point = old.current_node;
        Node* cur = new Node{temp_point->value, nullptr};
        Node* cur2 = nullptr;
        current_node = cur;
        while (temp_point != old.zero_node) {
            cur2 = new Node{temp_point->prev_node->value, nullptr};
            cur->prev_node = cur2;
            temp_point = temp_point->prev_node;
            cur = cur2;
        }
        zero_node = cur2;
        return *this;
    }

    ~Stack() {
        while (current_node != zero_node) {
            pop_back();
        }
        delete zero_node;
    };
};

template<class T>
void test_function(T first_v, T second_v, T third_v, T fourth_v) {
    Stack<T> test;
    test/first_v;
    test/second_v;
    test.pop_back();
    test.push_back(third_v);
    test/fourth_v;
    Stack<T> test2;
    test2 = test;
    while (test) {
        std::cout << --test << std::endl;
    }

    while (test2) {
        std::cout << --test2 << std::endl;
    }
}

#endif //STACK_H
