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

  // Arithmetic Operations
  // Addition
  int sum = x + y;
  // Subtraction
  double diff = z - 2.2;
  // Multiplication
  double product = x * 2;
  // Division
  double quotient = z / y;
  // Modulus
  int remainder = x % 3;

  // Logic Operators
  bool x_equal_y = x == y;
  bool x_not_equal_y = x != y;
  bool x_less_than_y = x < y;
  bool x_greater_than_y = x > y;
  bool x_greater_than_or_equal_y = x >= y;
  bool x_less_than_or_equal_y = x <= y;
  bool is_even = x % 2 == 0;
  bool is_odd = x % 2 == 1;

  // String Operators
  std::string first_name = "Nick";
  std::string last_name = "Barinaga";
  // Concatenation
  std::string full_name = first_name + " " + last_name;

  std::cout << my_name << '\n';

  return 0;
}
