#include <iostream>
#include <memory>

#include "Operations.h"

using namespace std;

int main() {
    vector<unique_ptr<Operation>> ops;

    ops.push_back(make_unique<Add>());
    ops.push_back(make_unique<Subtract>());
    ops.push_back(make_unique<Multiply>());
    ops.push_back(make_unique<Divide>());

    double a = 10, b = 5;

    for (const auto& op : ops) {
        cout << op->name() << ": "
             << op->compute(a, b) << endl;
    }
}