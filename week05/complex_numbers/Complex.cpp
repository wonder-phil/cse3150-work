#include "Complex.h"


Complex::Complex(double _real, double _img) : real{_real}, img{_img} {}

double
Complex::getReal() { return real; }

double
Complex::getImg() { return img; }

Complex & 
Complex::operator=(Complex & complex) {
    if (this == & complex) {
        return *this;
    } else {
        real = complex.real;
        img = complex.img;
    }

    return complex;
}


ostream & operator<<(ostream & os, Complex & complex) {
    os << "Real: "
       << complex.getReal()
       << " imaginary: "
       << complex.getImg();

       return os;
}