// func_pr.h
// AUTOR: Javier Garcia Santana
// FECHA: 27/09/2024
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Complejidad Computacional
// PRÁCTICA Nº: 1
//
// COMPILACIÓN: make || g++ -o power func_pr_main.cc

#ifndef FUNC_PR_H
#define FUNC_PR_H

class PrimitiveRecursive {
 public:
  virtual int baseCase(int x) = 0;     // Pure virtual for base case (identity)

  virtual int baseCase(int x, int y) { return 0; }    // Pure virtual for base case (identity)
  virtual int recursiveCase(int x, int y) { return 0; } // Pure virtual for recursive case

  // The main function that evaluates the primitive recursive function

  int evaluate(int x, int y = 0) {
    if (y == 0) {
      return baseCase(x, y);
    } else {
      return recursiveCase(x, y);
    }
  }
};

#endif
