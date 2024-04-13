#include <iostream>

void swapIt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 10;
  int b = 12;

  swapIt(&a, &b);

  std::cout << "a: " << a << " b: " << b << "\n";

  return 0;
}