#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void generateRandomValues(std::vector<int> &intsVector, int);
void printVector(std::vector<int> &intsVector);

int main() {
  std::vector<int> intsVector;
  generateRandomValues(intsVector, 20);
  printVector(intsVector);
}

void generateRandomValues(std::vector<int> &intsVector,
                          int quantityToGenerate) {
  int maxValue = 99;
  int randNumber = -1;
  srand(time(NULL));
  for (int count = 0; count < quantityToGenerate; count++) {
    randNumber = (rand() % maxValue) + 1;
    intsVector.push_back(randNumber);
  }
}

void printVector(std::vector<int> &intsVector) {
  std::cout << "Generating 20 random intergers\n";
  for (int i = 0; i < intsVector.size(); i++) {
    std::cout << intsVector.at(i) << ", ";
  }
  std::cout << "\n";
}