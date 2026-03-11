#include <iostream>
#include "stack.h"



using namespace std;


int main() {

    MyStack<int> myStack;

    myStack.push(3);
    myStack.push(5);

    while (!myStack.empty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }


    return 0;
}

