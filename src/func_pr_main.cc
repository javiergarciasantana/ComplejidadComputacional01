// func_pr_main.cc
#include <iostream>
#include "library.h"

int main() {
  Addition add;
  int x = 6;
  int y = 6;
  std::cout << "Addition of " << x  << " and " << y << ": " << add.evaluate(x, y) << std::endl;

  Product product;
  std::cout << "Product of " << x << " and " << y << ": " << product.evaluate(x, y) << std::endl;

  Power power;
  std::cout << "Power of " << x << " and " << y << ": " << power.evaluate(x, y) << std::endl;


  return 0;
}
