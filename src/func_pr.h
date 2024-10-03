// func_pr.h
// AUTOR: Javier Garcia Santana
// FECHA: 27/09/2024
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 2.1
// ASIGNATURA: Complejidad Computacional
// PRÁCTICA Nº: 1
//
// COMPILACIÓN: make || g++ -o power func_pr_main.cc

#ifndef FUNC_PR_H
#define FUNC_PR_H

class PrimitiveRecursive {
 public:
  PrimitiveRecursive() : counter_(0) {}

  virtual ~PrimitiveRecursive() = default;  // Virtual destructor for proper cleanup

  virtual int baseCase(int x) = 0;     // Pure virtual for base case

  virtual int baseCase(int x, int y) { return 0; }    // Optional overload for binary case
  virtual int recursiveCase(int x, int y) { return 0; } // Optional overload for binary recursive case

  // The main function that evaluates the primitive recursive function
  virtual int evaluate(int x, int y = 0) {
    ++counter_;
    if (y == 0) {
      return baseCase(x);  // Unary base case
    } else {
      return recursiveCase(x, y);  // Recursive case for binary
    }
  }

  int getCounter() const {
    return counter_;
  }

 protected:
  void incrementCounter() { ++counter_; }  // Helper to increment counter

 private:
   int counter_;
};

#endif
