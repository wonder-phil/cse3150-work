#ifndef _COMPLEX_H
#define _COMPLEX_H


Complex & operator+(const Complex & left, const Complex & other) {
            real += other.real;
            imaginary += other.imaginary;

            return *this;
        }

class Complex {

    double imaginary, real;

    public:
        Complex() : imaginary{0.0}, real{0.0} {};
        Complex(double _imaginary, double _real) : imaginary{_imaginary}, real{_real} {};
        Complex(const Complex & complex) : imaginary{complex.imaginary}, real{complex.real} {};

        double getReal() const { return real; }
        double getImaginary() const { return imaginary; }

        void setReal(double _real) { real = _real; }
        void setImaginary(double _imaginary) { imaginary = _imaginary; }

        bool operator==(const Complex & other) {
            if (this == &other ) {
                return true;
            } else {
                return (other.real == real && other.imaginary == imaginary);
            }
        }

        Complex & operator+=(const Complex & other) {
            real += other.real;
            imaginary += other.imaginary;

            return *this;
        }

        

    
    
};


//ostream & operator<<(ostream & os, const Complex & complex);

#endif
