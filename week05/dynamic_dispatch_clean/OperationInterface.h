#ifndef _OPERATION_H
#define _OPERATION_H

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Operation {
public:
    virtual double compute(double a, double b) const = 0; // pure virtual
    virtual const char* name() const = 0;
    virtual ~Operation() = default;
};

#endif