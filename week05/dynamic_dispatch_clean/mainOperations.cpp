#include <iostream>
#include <memory>

#include "Operations.h"
#include "Intermediate.h"

using namespace std;

int main() {
    vector<Intermediate *> ops;

    ops.push_back(new Add());
    ops.push_back(new Subtract());
    ops.push_back(new Multiply());
    ops.push_back(new Divide());

    double a = 10, b = 5;

    for (const auto & op : ops) {
        cout << op->name() << ": "
             << op->compute(a, b) << endl;
    }
}