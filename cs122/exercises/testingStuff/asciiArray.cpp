#include <iostream>

int main() {
  std::string userInput = " ";
  int intArray[91];
  int englishIndex;
  int test = 91;
  for (int englishIndex = 0; englishIndex < 91; englishIndex++) {
    intArray[englishIndex] = englishIndex;
  }

  std::cout << char(test);
}