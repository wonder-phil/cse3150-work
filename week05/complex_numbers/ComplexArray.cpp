
#include "ComplexArray.h"

using namespace std;

ComplexArray::ComplexArray() : complexArrayPtr{nullptr} {}
ComplexArray::ComplexArray(int _arraySize) : complexArrayPtr{new Complex[_arraySize]}, arraySize{_arraySize} {};
ComplexArray::~ComplexArray() { delete [] complexArrayPtr; };
//ComplexArray::ComplexArray(const ComplexArray & complexArray) = delete;

ComplexArray::ComplexArray(ComplexArray && complexArray) {
    complexArrayPtr = complexArray.complexArrayPtr;
    arraySize= complexArray.arraySize;

    complexArray.complexArrayPtr = nullptr;
    complexArray.arraySize = 0;
}

ComplexArray & ComplexArray::operator=(ComplexArray && complexArray) {
    if (& complexArray != this) {
        if (complexArrayPtr != nullptr) {
            delete [] complexArrayPtr;
        }
        complexArrayPtr = complexArray.complexArrayPtr;
        arraySize= complexArray.arraySize;

        complexArray.complexArrayPtr = nullptr;
        complexArray.arraySize = 0;
    }
    return *this;
}

void ComplexArray::push_in_position(Complex & complex, int position) {
    complexArrayPtr[position] = complex;
}

Complex & ComplexArray::get_in_position(int position) const {
    return complexArrayPtr[position];
}



ostream & operator<<(ostream & os, const ComplexArray & complexArray) {
    for (int i = 0; i < complexArray.arraySize; i++) {
        os << complexArray.get_in_position(i);
    }
    return os;
}