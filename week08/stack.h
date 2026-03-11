#ifndef _STACK_H
#define _STACK_H

#include <iostream>
#include <cassert>

using namespace std;

#define TOTAL 100

template<typename T>
class MyStack {

    T array[TOTAL];
    int last;

public:

    MyStack() : last{0} {}
    void pop();
    void push(T item) ;
    T top();
    bool empty() ;
};

template<typename T>
void MyStack<T>::pop() {
    if (last > 0) {
        last --;
    }
}

template<typename T>
void MyStack<T>::push(T item) {
    
    array[++last] = item;
}

template<typename T>
T MyStack<T>::top() {
    return array[last];
}

template<typename T>
bool MyStack<T>::empty() {
    return last == 0;
}


#endif