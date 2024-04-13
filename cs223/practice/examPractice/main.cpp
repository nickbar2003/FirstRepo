#include "BankAccount.cpp"
#include "BankAccount.h"
#include <iostream>

int main() {

  float testFloat = 100.23314;
  printf("decimal to four places %.4f\n", testFloat);

  BankAccount *b1 = new BankAccount(100.000);

  return 0;
}
