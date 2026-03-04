#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>

using namespace std;

class Complex {

    double real, img;

public:
    Complex() : real{0.0}, img{0.0} {}
    Complex(double real, double img);
    Complex(Complex & complex);

    Complex & operator=(Complex & complex);
    bool operator==(Complex & complex);

    double getReal();
    double getImg();

};


ostream & operator<<(ostream & os, Complex & complex);

#endif
