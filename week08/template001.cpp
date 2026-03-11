#include <iostream>


using namespace std;


template<typename T>
T myMax(T x, T y) {
    return x > y ? x : y;
}

int main() {

    cout <<  myMax(3,4) << endl;
    cout <<  myMax(4,3) << endl;

    return 0;
}
