
#include <fstream>
#include <iostream>

void openFile(std::fstream &, std::string);
void printArray(std::fstream &, int *);
void reverseArray(std::fstream &, int *);
void readToArray(std::fstream &, int *);

int main() {
  std::fstream fileTag;
  int intArr[10];
  std::string fileName = "numbers.txt";

  openFile(fileTag, fileName);
  readToArray(fileTag, intArr);
  printArray(fileTag, intArr);
  openFile(fileTag, fileName);
  reverseArray(fileTag, intArr);
  printArray(fileTag, intArr);
}

void openFile(std::fstream &fileTag, std::string fileName) {

  fileTag.open(fileName);
  if (fileTag.good()) {

  } else {
    std::cout << "File did not open properly";
  }
}

void printArray(std::fstream &fileTag, int *array) {
  for (int i = 0; i < 10; i++) {
    std::cout << array[i] << ", ";
  }
  std::cout << "\n";
}

void reverseArray(std::fstream &fileTag, int *array) {
  for (int i = 9; i >= 0; i--) {
    fileTag >> array[i];
  }
  fileTag.close();
}

void readToArray(std::fstream &fileTag, int *array) {
  for (int i = 0; i < 10; i++) {
    fileTag >> array[i];
  }
  fileTag.close();
}