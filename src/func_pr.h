// func_pr.h
#ifndef FUNC_PR_H
#define FUNC_PR_H

class PrimitiveRecursive {
 public:
  virtual int baseCase(int x) = 0;     // Pure virtual for base case (identity)
  virtual int recursiveCase(int x) = 0; // Pure virtual for recursive case

  virtual int baseCase(int x, int y) = 0;     // Pure virtual for base case (identity)
  virtual int recursiveCase(int x, int y) = 0; // Pure virtual for recursive case

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
