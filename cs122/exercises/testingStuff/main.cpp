#include <iostream>

void writeSequence(int);
void writeSequenceHelper(int, bool);
void printStars(int);

int main() {
  printStars(5);
  printStars(2);

  writeSequence(2);
  writeSequence(2);
  writeSequence(3);
  writeSequence(4);
  writeSequence(5);
  writeSequence(6);

  return 0;
}

void printStars(int n) {
  if (n == 0) {
    std::cout << "\n";
    return;
  }

  std::cout << "*";
  printStars(n - 1);
}

void writeSequence(int n) {
  if (n % 2 == 0) {
    writeSequenceHelper(n / 2, true);
  } else {
    writeSequenceHelper(n / 2 + 1, false);
  }
  std::cout << "\n";
}

void writeSequenceHelper(int n, bool isEven) {
  if (n == 1 && isEven) {
    std::cout << "1 1 ";
    return;
  } else if (n == 1 && !isEven) {
    std::cout << "1 ";
    return;
  }

  std::cout << n << " ";
  writeSequenceHelper(n - 1, isEven);
  std::cout << n << " ";
}
