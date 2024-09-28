// library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include "func_pr.h"

// Primitive Recursive Function for Zero
class Zero : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
        return 0; // Base case for zero is the identity function: z(x) = 0
    }
};

// Primitive Recursive Function for Successor
class Successor : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
        return x + 1; // Successor function: s(x) = x + 1
    }
};

// Primitive Recursive Function for One
class One : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
        Successor successor;
        Zero zero;
        return successor.baseCase(zero.baseCase(x)); // One function: one(x) = s(z(x))
    }
};

// Primitive Recursive Function for Addition
class Addition : public PrimitiveRecursive {
public:

    int baseCase(int x) {
        return baseCase(x, x); 
    }

    // Base case: when y is 0, f(x, 0) = x
    int baseCase(int x, int y) {
        return x; 
    }

    // Recursive case: when y > 0, f(x, s(y)) = s(f(x, y)) or f(x, y+1) = f(x, y) + 1
    int recursiveCase(int x, int y) {
        Successor successor;
        if (y == 0) {
            return baseCase(x, y); // If y is 0, return base case
        } else {
            return successor.recursiveCase(x, y - 1); // f(x, y+1) = s(f(x, y))
        }
    }
};


// Primitive Recursive Function for Multiplication
// class Multiplication : public PrimitiveRecursive {
// public:
//     int baseCase(int n) override {
//       return 0; // Base case for multiplication: f(0, y) = 0
//     }

//     int recursiveCase(int n) override {
//       return evaluate(n - 1) + evaluate(n); // Recursive case: f(n+1, y) = f(n, y) + y
//     }
// };

#endif
