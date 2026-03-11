#ifndef _COMPLEX_ARRAY_H
#define _COMPLEX_ARRAY_H

#include <iostream>
#include "Complex.h"

class ComplexArray {

    Complex * complexArrayPtr;
    int arraySize;

    friend ostream & operator<<(ostream & os, const ComplexArray & complexArray);

public:
    ComplexArray();
    ComplexArray(int arraySize);
    ~ComplexArray();
    ComplexArray(const ComplexArray & complexArray);
    ComplexArray(ComplexArray && complexArray);
    ComplexArray & operator=(ComplexArray && complexArray);

    void push_in_position(Complex & complex, int position);
    Complex & get_in_position(int position) const;

};

//ostream & operator<<(ostream os, const ComplexArray & complexArray);

#endif
