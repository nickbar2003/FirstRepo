#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void generateRandomValues(std::vector<int> &intsVector, int);
void printVector(std::vector<int> &intsVector);

int main() {
  std::ofstream oddsFile;
  std::ofstream evensFile;
  std::ofstream primesFile;

  std::vector<int> intsVector;
  generateRandomValues(intsVector, 20);
  printVector(intsVector);

  oddsFile.open("odds.txt");
  oddsFile << "Odds\n";
  oddsFile.close();

  evensFile.open("evens.txt");
  evensFile << "Evens\n";
  evensFile.close();

  primesFile.open("primes.txt");
  primesFile << "Primes\n";
  primesFile.close();
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