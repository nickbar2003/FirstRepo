#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void generateRandomValues(std::vector<int> &intsVector, int);
void printVectors(std::vector<int> &intsVector, std::vector<int> &oddNumbers,
                  std::vector<int> &evenNumbers,
                  std::vector<int> &primeNumbers);
void numberProccesing(std::vector<int> &intsVector,
                      std::vector<int> &oddNumbers,
                      std::vector<int> &evenNumbers,
                      std::vector<int> &primeNumbers);
void writeVectorToFile(std::ofstream &, std::vector<int> &);
bool isPrime(int);
bool isOdd(int);
bool isEven(int);
std::string evenOrOdd(int);

std::ofstream oddsFile;
std::ofstream evensFile;
std::ofstream primesFile;

std::string userInput;

int quantityToGenerate;
const int defaultAmount = 20;