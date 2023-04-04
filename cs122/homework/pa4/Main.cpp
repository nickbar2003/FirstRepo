/*
 Name: Nicholas Barinaga
 Class: CptS 122, Spring 2020
 Date: January 15, 2020
 Programming Assignment: PA1
 Description: This program computes...
 Notes: I utilized this source url: ...
*/

#include "PA4.h"

int main(int argc, char *argv[]) {

  std::ifstream fileTag;

  if (argv[1] == 0) {
    std::cout << "You didn't enter a file to be processed!";
  } else {
    processFile(argv[1]);
  }

  return 0;
}
