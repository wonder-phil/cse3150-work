//#include "OperationInterface.h"
#include "Intermediate.h"

class Add : public Intermediate {
public:
    double compute(double a, double b) const override {
        return a + b;
    }

    const char* name() const override {
        return "Add";
    }
};

class Subtract : public Intermediate {
public:
    double compute(double a, double b) const override {
        return a - b;
    }

    const char* name() const override {
        return "Subtract";
    }
};

class Multiply : public Intermediate {
public:
    double compute(double a, double b) const override {
        return a * b;
    }

    const char* name() const override {
        return "Multiply";
    }
};

class Divide : public Intermediate {
public:
    
    double compute(double a, double b) const override {
        if (b == 0) throw runtime_error("Division by zero");
        return a / b;
    }

    const char* name() const override {
        return "Divide";
    }
};