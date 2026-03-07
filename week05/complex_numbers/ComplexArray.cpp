
#include "ComplexArray.h"

using namespace std;

ComplexArray::ComplexArray() : complex{nullptr} {}
ComplexArray::ComplexArray(int _arraySize) : complex{new Complex[_arraySize]}, arraySize{_arraySize} {};
ComplexArray::~ComplexArray() { delete [] complex; };
ComplexArray::ComplexArray(const ComplexArray & complexArray) = delete;
ComplexArray::ComplexArray(const ComplexArray && complexArray) {
    
}
