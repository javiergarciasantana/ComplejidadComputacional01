// func_pr_main.cc
#include <iostream>
#include "library.h"

int main() {
    Addition add;
    int x = 5;
    std::cout << "Addition of " << x << ": " << add.evaluate(x) << std::endl;

    Multiplication multiply;
    std::cout << "Multiplication of " << x << ": " << multiply.evaluate(x) << std::endl;

    return 0;
}
