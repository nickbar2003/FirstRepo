
#include <fstream>
#include <iostream>

void openFile(std::string);
void printArray(int *);
void reverseArray(int *);
void readToArray(int *);

std::fstream fileTag;
int main() {
  int intArr[10];
  std::string fileName = "numbers.txt";

  openFile(fileName);
  readToArray(intArr);
  printArray(intArr);
  openFile(fileName);
  reverseArray(intArr);
  printArray(intArr);
}

void openFile(std::string fileName) {

  fileTag.open(fileName);
  if (fileTag.good()) {

  } else {
    std::cout << "File did not open properly";
  }
}

void printArray(int *array) {
  for (int i = 0; i < 10; i++) {
    std::cout << array[i] << ", ";
  }
  std::cout << "\n";
}

void reverseArray(int *array) {
  for (int i = 9; i >= 0; i--) {
    fileTag >> array[i];
  }
  fileTag.close();
}

void readToArray(int *array) {
  for (int i = 0; i < 10; i++) {
    fileTag >> array[i];
  }
  fileTag.close();
}