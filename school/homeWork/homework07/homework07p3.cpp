#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void generateRandomValues(std::vector<int> &intsVector, int);
void printVectors(std::vector<int> &);
void numberProccesing(std::vector<int> &intsVector,
                      std::vector<int> &oddNumbers,
                      std::vector<int> &evenNumbers,
                      std::vector<int> &primeNumbers);
bool isPrime(int);
bool isOdd(int);
bool isEven(int);
std::string evenOrOdd(int);

int main() {
  std::ofstream oddsFile;
  std::ofstream evensFile;
  std::ofstream primesFile;

  std::vector<int> intsVector;
  std::vector<int> oddNumbers;
  std::vector<int> evenNumbers;
  std::vector<int> primeNumbers;

  generateRandomValues(intsVector, 20);
  numberProccesing(intsVector, oddNumbers, evenNumbers, primeNumbers);
	std::cout << "Generating 20 random intergers\n";
  printVectors(intsVector);
	std::cout << "\n";
	std::cout << "Odd Numbers: ";
	printVectors(oddNumbers);
	std::cout << "\n";
	std::cout << "Even Numbers: ";
	printVectors(evenNumbers);
	std::cout << "\n";
	std::cout << "Prime Numbers: ";
	printVectors(primeNumbers);
	std::cout << "\n";
	
 
 
	//std::cout << "\n";
  //std::cout << "Even Numbers: ";

  /* oddsFile.open("odds.txt");
  oddsFile << "Odds\n";
  oddsFile.close();

  evensFile.open("evens.txt");
  evensFile << "Evens\n";
  evensFile.close();

  primesFile.open("primes.txt");
  primesFile << "Primes\n";
  primesFile.close(); */
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

void printVectors(std::vector<int> &vectorToPrint) {
 for (int i = 0; i < vectorToPrint.size(); i++) {
	std::cout << vectorToPrint.at(i) << " ";
 }
 std::cout << "\n";
}

void numberProccesing(std::vector<int> &intsVector,
                      std::vector<int> &oddNumbers,
                      std::vector<int> &evenNumbers,
                      std::vector<int> &primeNumbers) {

  for (int i = 0; i < intsVector.size(); i++) {
    bool primeValue = isPrime(intsVector.at(i));
    if (primeValue) {
      primeNumbers.push_back(intsVector.at(i));
    }
  }

  for (int i = 0; i < intsVector.size(); i++) {
    bool oddValue = isOdd(intsVector.at(i));
    if (oddValue) {
      oddNumbers.push_back(intsVector.at(i));
    }
  }

  for (int i = 0; i < intsVector.size(); i++) {
    bool evenValue = isEven(intsVector.at(i));
    if (evenValue) {
      evenNumbers.push_back(intsVector.at(i));
    }
  }
  std::cout << "numbers processed";
}

bool isOdd(int number) {
  bool result;
  if (number % 2 == 1) {
    result = true;
  } else {
    result = false;
  }
  return result;
}

bool isEven(int number) {
  bool result;
  if (number % 2 == 0) {
    result = true;
  } else {
    result = false;
  }
  return result;
}

bool isPrime(int number) {
  if (number <= 1) {
    return false;
  }
  // Check from [2 .. number / 2 + 1]
  for (int divisor = 2; divisor < (number / 2) + 1; divisor++) {
    if (number % divisor == 0) {
      return false;
    }
  }
  return true;
}

// std::string evenOrOdd(int number) {
// if (number % 2 == 0) {

//}

//}
