
ostream & operator<<(ostream & os, const Complex & complex) {

    os  << complex.getReal()
        << " + "
        << complex.getImaginary()
        << "i";

    return os;
}