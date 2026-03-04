#ifndef _INTERMEDIATE_H
#define _INTERMEDIATE_H

#include "OperationInterface.h"

using namespace std;

class Intermediate : public Operation {

public:

    double compute(double a, double b) const override {
        return 0;
    }

    const char* name() const override {
        return "OPERATION";
    }

    ~Intermediate() {}

};

#endif 