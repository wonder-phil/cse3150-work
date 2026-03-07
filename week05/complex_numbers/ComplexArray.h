#ifndef _COMPLEX_ARRAY_H
#define _COMPLEX_ARRAY_H

#include <iostream>
#include "Complex.h"

class ComplexArray {

    Complex * complex;
    int arraySize;

public:
    ComplexArray();
    ComplexArray(int arraySize);
    ~ComplexArray();
    ComplexArray(const ComplexArray & complexArray);
    ComplexArray(const ComplexArray && complexArray);

};


#endif
