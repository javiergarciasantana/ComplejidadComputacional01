// func_pr_main.cc
#include <iostream>
#include "library.h"

int main() {
  Addition add;
  int x = 5;
  int y = 3;
  std::cout << "Addition of " << x  << " and " << y << ": " << add.evaluate(x, y) << std::endl;

  // Multiplication multiply;
  // std::cout << "Multiplication of " << x << ": " << multiply.evaluate(x) << std::endl;

  return 0;
}
