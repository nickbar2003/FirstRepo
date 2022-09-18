/*
  Topics:
  - Variables
  - Basic Types
  - Expressions
  - Arithmetic Operators
  - Logic Operators
  - String Concatenation
*/
#include <iostream>

int main() {

  // variable declaration
  // type name = value;
  // int  x    = 4;

  // Basic data types
  int x = 42;
  float y = 2.4f;
  double z = 124.0;
  char the_letter_a = 'a';
  bool is_nick_cool = false;
  std::string my_name = "Meine name ist nick";

  // Expressions
  // x + 4
  // cond && cond

  // Arithmetic Operators
  // Addition +
  int sum = x + y;
  // Subtraction -
  double diff = z - 2.2;
  // Multiplication *
  double product = x * 2;
  // Division /
  double quotient = z / y;
  // Modulus %
  int remainder = x % 3;

  // Logic Operators
  // Equal To ==
  bool x_equal_y = x == y;
  // Not ![cond], != for example
  bool x_not_equal_y = x != y;
  // Less Than <
  bool x_less_than_y = x < y;
  // Greather Than >
  bool x_greater_than_y = x > y;
  // Greather Than Or Equal To >=
  bool x_greater_than_or_equal_y = x >= y;
  // Less Than Or Equal To <=
  bool x_less_than_or_equal_y = x <= y;

  bool is_even = x % 2 == 0;
  bool is_odd = x % 2 == 1;

  // Or ||
  bool either_even_or_odd = is_even || is_odd;
  // And &&
  bool x_is_less_than_4_and_is_odd = (x < 4) && is_odd;

  // String Concatenation
  std::string first_name = "Nick";
  std::string last_name = "Barinaga";
  std::string full_name = first_name + " " + last_name;

  std::cout << full_name << '\n';

  return 0;
}
