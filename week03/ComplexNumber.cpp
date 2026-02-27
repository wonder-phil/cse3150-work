#include <iostream>
#include "ComplexNumber.h"

using namespace std;

ostream & operator<<(ostream & os, const Complex & complex) {

    os  << complex.getReal()
        << " + "
        << complex.getImaginary()
        << "i";

    return os;
}