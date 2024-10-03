// library.h
// AUTOR: Javier Garcia Santana
// FECHA: 27/09/2024
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 2.1
// ASIGNATURA: Complejidad Computacional
// PRÁCTICA Nº: 1
//
// COMPILACIÓN: make || g++ -o power func_pr_main.cc

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
    return successor.evaluate(zero.evaluate(x)); // One function: one(x) = s(z(x))
  }
};

// Primitive Recursive Function for Addition
class Addition : public PrimitiveRecursive {
 public:
  int baseCase(int x) override {
    return baseCase(x, 0); 
  }

  // Base case: when y is 0, f(x, 0) = x
  int baseCase(int x, int y) override {
    return x; 
  }

  // Recursive case: when y > 0, f(x, s(y)) = s(f(x, y)) or f(x, y+1) = f(x, y) + 1
  int recursiveCase(int x, int y) override {
    Successor successor;
    if (y == 0) {
      return baseCase(x, y); // If y is 0, return base case
    } else {
      return successor.baseCase(evaluate(x, y - 1)); 
    }
  }
};

// Primitive Recursive Function for Product
class Product : public PrimitiveRecursive {
 public:
  int baseCase(int x) override {
    return baseCase(x, 0); 
  }

  int baseCase(int x, int y) override {
    Zero zero;
    return zero.baseCase(x); // Base case for multiplication: f(0, y) = 0
  }

  int recursiveCase(int x, int y) override {
    Addition addition;
    return addition.evaluate(x, evaluate(x, y - 1)); 
  }
};

// Primitive Recursive Function for Power
class Power : public PrimitiveRecursive {
 public:
  int baseCase(int x) override {
    return baseCase(x, 0); 
  }

  int baseCase(int x, int y) override {
    One one;
    return one.baseCase(x); // Base case for power: f(x, 0) = 1
  }

  int recursiveCase(int x, int y) override {
    Product product;
    return product.evaluate(x, evaluate(x, y - 1));
  }
};

#endif
