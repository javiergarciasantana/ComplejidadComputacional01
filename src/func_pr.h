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


int counter = 0; 

class PrimitiveRecursive {
 public:
  
  virtual ~PrimitiveRecursive() = default;  // Virtual destructor for cleanup

  virtual int baseCase(int x) = 0;     // Pure virtual for base case

  virtual int baseCase(int x, int y) { return 0; }    // Optional overload for binary case
  virtual int recursiveCase(int x, int y) { return 0; } // Optional overload for binary recursive case

  // The main function that evaluates the primitive recursive function
  virtual int evaluate(int x, int y = 0) {
    ++counter;
    if (y == 0) {
      return baseCase(x);  // Unary base case
    } else {
      return recursiveCase(x, y);  // Recursive case for binary
    }
  }
  int getCounter() { return counter; }

};

#endif
