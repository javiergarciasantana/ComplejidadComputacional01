// library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include "func_pr.h"

// Primitive Recursive Function for Zero
class Zero : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
      return 0; // Base case for zero is identity function: z(x) = 0
    }
};

// Primitive Recursive Function for Sucessor
class Sucessor : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
      return x + 1; // Base case for sucessor is identity function: s(x) = x + 1
    }
}

// Primitive Recursive Function for One
class One : public PrimitiveRecursive {
public:
    int baseCase(int x) override {
      return Sucessor::baseCase(Zero::baseCase(x)); // Base case for one is identity function: one(x) = s o z
    }
};

// Primitive Recursive Function for Addition
class Addition : public PrimitiveRecursive {
public:
    int baseCase(int x, int y) override {
      return x; // Base case for addition is identity function: f(x, 0) = g(x)
    }

    int recursiveCase(int x, int y) override {
      return evaluate(x, Sucessor::baseCase(y)); // Addition via successor: f(x, s(y)) = x + (y + 1)
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
