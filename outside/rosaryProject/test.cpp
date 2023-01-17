#include <iostream>

int main() {
  char letterJ = 'J';
  std::cout << "\033[1;31m";
  std::cout << letterJ;
  std::cout << "\033[0m\n";
}
