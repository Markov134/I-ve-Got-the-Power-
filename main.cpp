#include <iostream>

#include "src/factorial.hpp"
#include "src/PowerOf.h"

int main() {
  std::cout << "The factorial of 5 is " << factorial(5) << std::endl;

  int temp = naivePower(2, 5);
  std::cout << temp << std::endl;
  int temp1 = unoptimizedDCPower(2, 5);
  std::cout << temp1 << std::endl;
  int temp2 = optimizedDCPower(2, 5);
  std::cout << temp2 << std::endl;
}
