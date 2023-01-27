#include <fstream>
#include <iostream>

int main() {
  int intArr[10];
  std::fstream fileTag;
  fileTag.open("numbers.txt");
  for (int i = 9; i > 0; i--) {
    fileTag >> intArr[i];
  }

  for (int i = 10; i <= 10; i++) {
    std::cout << intArr[i] << ", ";
  }
}