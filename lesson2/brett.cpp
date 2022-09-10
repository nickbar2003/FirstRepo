/*
  Topics:
  - Conditionals (Branches)
  - Functions (Procedures)
  - User input
  - Loops
 */
#include <cstdio>
#include <iostream>

// Forward Declaration - Lets you call functions before the defn
// return_type function_name(parameter types);
// void print_input(std::string);
void print_input(std::string);
void branch_testing();
bool always_true();
bool is_even(int);


int main() {
  // Function call, aka actually run the function
  // print_input("My fart");

  int hourly_rate = 0;
  int hours_worked = 0;

  std::cout << "Please enter a your hourly rate: ";
  std::cin >> hourly_rate;

  std::cout << "Please enter a your hours worked: ";
  std::cin >> hours_worked;


  int wage = hourly_rate * hours_worked;

  std::cout << "You have earned: $" << wage << " \n";


  return 0;
}



// Actual function declaration
// We expect a variable, lets just call it input for now
// But it could any string. 
// This function will take that input, and print it to the console.
void print_input(std::string input) {
  std::cout << input << '\n';
}

void branch_testing() {
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
