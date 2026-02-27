#include "OperationInterface.h"

class Add : public Operation {
public:
    double compute(double a, double b) const override {
        return a + b;
    }

    const char* name() const override {
        return "Add";
    }
};

class Subtract : public Operation {
public:
    double compute(double a, double b) const override {
        return a - b;
    }

    const char* name() const override {
        return "Subtract";
    }
};

class Multiply : public Operation {
public:
    double compute(double a, double b) const override {
        return a * b;
    }

    const char* name() const override {
        return "Multiply";
    }
};

class Divide : public Operation {
public:
    double compute(double a, double b) const override {
        if (b == 0) throw runtime_error("Division by zero");
        return a / b;
    }

    const char* name() const override {
        return "Divide";
    }
};