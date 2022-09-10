/*
  Topics:
  - Conditionals (Branches)
  - Loops
  - Functions (Procedures)
  - Arrays
 */
#include <cstdio>
#include <iostream>

// Function Forward Declaration
// return_type function_name(parameter types);
bool always_true();
bool is_even(int);

int main() {
  // In the parens, a conditional that evalutes to either true or false
  if (true) {
    printf("true\n");
  }

  if (false) {
    printf("false\n");
  }

  if (2 > 1) { // -> (true)
    printf("duh\n");
  }

  if (2 < 1) { // -> (false)
    printf("never\n");
  }

  int a = 21;

  if (a % 2 == 0) {
    printf("a is even\n");
  } else { // otherwise
    printf("a is odd\n");
  }

  int b = 101;

  if (b > 100) {
    printf("b is big\n");
  } else if (b > 50) {
    printf("b is medium\n");
  } else {
    printf("b is small\n");
  }

  bool result = always_true();

  std::cout << result << std::endl;

  int c = 4;

  if (is_even(c)) {
    printf("c is even\n");
  } else {
    printf("c is odd\n");
  }

  return 0;
}

// Function Declaration
// return_type function_name(arguments) { }
bool always_true() {
  return true; //
}

bool is_even(int number) {
  return number % 2 == 0;
  //
}
