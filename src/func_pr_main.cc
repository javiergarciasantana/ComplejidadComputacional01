// func_pr_main.cc
// AUTOR: Javier Garcia Santana
// FECHA: 27/09/2024
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Complejidad Computacional
// PRÁCTICA Nº: 1
//
// COMPILACIÓN: make || g++ -o power func_pr_main.cc

#include <iostream>
#include <string>
#include <cassert>
#include "library.h"

int main(int argc, char* argv[]) {
  if (argc == 3) {
  int x = std::stoi(std::string(argv[1]));
  int y = std::stoi(std::string(argv[2]));
  if(x < 0 || y < 0) {
    std::cerr << "Negative values not allowed" << std::endl;
    return 1;
  }

  Power power;
  std::cout << "Power of " << x << " and " << y << ": " << power.evaluate(x, y) << std::endl;
  std::cout << "Number of function calls: " << power.getCounter() << std::endl;
  } else if (argc == 2 && std::string(argv[1]) == "usage") {
    std::cerr << "use ./power int int in order to obtain the power of the first value elevated to the second one" << std::endl;
    return 1;
  } else {
    std::cerr << "use ./power usage in order to know how to execute this program" << std::endl;
    return 1;
  }
  return 0;
}
