#include <iostream>

#include "ComplexArray.h"

using namespace std;


int main() {

    int totalComplexNumners;
    cout << "How many complex numbers? ";
    cin >> totalComplexNumners;

    ComplexArray complexArray(totalComplexNumners);

    for (int i=0; i < totalComplexNumners; i++) {
        double real, imag;
        cout << "Enter complex number: ";
        cin >> real >> imag;
        Complex complex(real, imag);
        complexArray.push_in_position(complex,i);
    }

    cout << complexArray << endl;

    return 0;
}