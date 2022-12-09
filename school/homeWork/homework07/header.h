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
void writeVectorToFile(std::ofstream &, std::vector<int> &);
void showVectorStats(std::string, std::vector<int> &);

int calcVectorSum(std::vector<int> &);
int calcVectorMean(std::vector<int> &);

bool isPrime(int);
bool isOdd(int);
bool isEven(int);

std::ofstream oddsFile;
std::ofstream evensFile;
std::ofstream primesFile;

std::string userInput;
std::string oddNumbersTitle = "Odd Numbers ";
std::string evenNumbersTitle = "Even Numbers";
std::string primeNumbersTitle = "Prime Numbers";
std::string allNumbersTitle = "All Numbers ";

int quantityToGenerate;
const int defaultAmount = 20;