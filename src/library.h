// library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include "func_pr.h"

// Primitive Recursive Function for Addition
class Addition : public PrimitiveRecursive {
public:
    int baseCase(int n) override {
        return n; // Base case for addition is identity function: f(0, y) = y
    }

    int recursiveCase(int n) override {
        return evaluate(n - 1) + 1; // Addition via successor: f(n+1, y) = f(n, y) + 1
    }
};

// Primitive Recursive Function for Multiplication
class Multiplication : public PrimitiveRecursive {
public:
    int baseCase(int n) override {
        return 0; // Base case for multiplication: f(0, y) = 0
    }

    int recursiveCase(int n) override {
        return evaluate(n - 1) + evaluate(n); // Recursive case: f(n+1, y) = f(n, y) + y
    }
};

#endif
