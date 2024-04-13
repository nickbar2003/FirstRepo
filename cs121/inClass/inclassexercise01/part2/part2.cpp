#include <iostream>

int main() {

  std::string threeDigitNumber;
  int hundreds;
  int tens;
  int ones;

  std::cout << "give me a three digit number ";
  std::cin >> threeDigitNumber;

  int number = stoi(threeDigitNumber);

  hundreds = number / 100;
  std::cout << hundreds;

  tens = (number % 100) / 10;
  std::cout << tens;

  ones = (number % 100) % 10;
  std::cout << ones;

  std::cout << "your number " << threeDigitNumber << " has " << hundreds
            << " hundreds, " << tens << " tens," << ones << " ones."
            << std::endl;

  return 0;
}