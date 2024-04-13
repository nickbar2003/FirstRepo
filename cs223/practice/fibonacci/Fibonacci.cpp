
#include <iostream>

int ComputeFiboRec(int);
int ComputeFiboLoop(int);

int main(int argc, char *argv[]) {

  std::cout << ComputeFiboRec(std::stoi(argv[1])) << "\n";

  return 0;
}

int ComputeFiboRec(int n) {

  if (n == 1 || n == 2) {
    return 1;
  }

  return ComputeFiboRec(n - 1) + ComputeFiboRec(n - 2);
}

// int ComputeFiboLoop(int n) {
//   if (n == 1 || n == 2) {
//     return 1;
//   }

//   for (int i = 2; i <= n; i++) {
//   }
// }
