#include <iostream>

#include "ComplexNumber.h"

using namespace std;

#include "functions.h"


int main() {

    Complex c(2,3);
    Complex d(3,-3);
    
    d += c;

    cout << d << endl;

}