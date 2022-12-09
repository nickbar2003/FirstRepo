#include "header.h"

int main() {

  std::vector<int> intsVector;
  std::vector<int> oddNumbers;
  std::vector<int> evenNumbers;
  std::vector<int> primeNumbers;

  std::cout << "Data proccesing program\n"
            << "How many numbers wouldy you like to generate and "
               "process(Default = 20)? ";
  getline(std::cin, userInput);

  if (userInput == "") {
    quantityToGenerate = defaultAmount;
  } else {
    quantityToGenerate = stoi(userInput);
  }
  generateRandomValues(intsVector, quantityToGenerate);
  numberProccesing(intsVector, oddNumbers, evenNumbers, primeNumbers);
  std::cout << "\n\nGenerating " << quantityToGenerate
            << " random intergers\n\n";
  std::cout << allNumbersTitle << ": ";
  printVectors(intsVector);
  std::cout << "\n";
  std::cout << oddNumbersTitle << ": ";
  printVectors(oddNumbers);
  std::cout << "\n";
  std::cout << evenNumbersTitle << ": ";
  printVectors(evenNumbers);
  std::cout << "\n";
  std::cout << primeNumbersTitle << ": ";
  printVectors(primeNumbers);
  std::cout << "\n";
  writeVectorToFile(oddsFile, oddNumbers);
  writeVectorToFile(evensFile, evenNumbers);
  writeVectorToFile(primesFile, primeNumbers);

  showVectorStats(allNumbersTitle, intsVector);
  showVectorStats(oddNumbersTitle, oddNumbers);
  showVectorStats(evenNumbersTitle, evenNumbers);
  showVectorStats(primeNumbersTitle, primeNumbers);
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
    bool oddValue = isOdd(intsVector.at(i));
    bool evenValue = isEven(intsVector.at(i));
    if (primeValue) {
      primeNumbers.push_back(intsVector.at(i));
    }

    if (oddValue) {
      oddNumbers.push_back(intsVector.at(i));
    } else if (evenValue) {
      evenNumbers.push_back(intsVector.at(i));
    }
  }
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

void writeVectorToFile(std::ofstream &fileToWriteTo,
                       std::vector<int> &vectorToWrite) {

  if (&fileToWriteTo == &oddsFile) {
    fileToWriteTo.open("dataFiles/odds.txt");

    for (int i = 0; i < vectorToWrite.size(); i++) {
      fileToWriteTo << vectorToWrite.at(i) << "\n";
    }
  } else if (&fileToWriteTo == &evensFile) {
    fileToWriteTo.open("dataFiles/evens.txt");

    for (int i = 0; i < vectorToWrite.size(); i++) {
      fileToWriteTo << vectorToWrite.at(i) << "\n";
    }
  } else if (&fileToWriteTo == &primesFile) {
    fileToWriteTo.open("dataFiles/primes.txt");

    for (int i = 0; i < vectorToWrite.size(); i++) {
      fileToWriteTo << vectorToWrite.at(i) << "\n";
    }
  }
}

int calcVectorSum(std::vector<int> &vectorToSum) {
  int sum = 0;
  for (int i = 0; i < vectorToSum.size(); i++) {
    sum = sum + vectorToSum.at(i);
  }
  return sum;
}

int calcVectorMean(std::vector<int> &vectorToMean) {
  int sum = 0;
  int mean = 0;
  for (int i = 0; i < vectorToMean.size(); i++) {
    sum = sum + vectorToMean.at(i);
  }
  mean = sum / vectorToMean.size();
  return mean;
}

void showVectorStats(std::string vectorTitle,
                     std::vector<int> &vectorReference) {
  int vectorNumberQuantity = vectorReference.size();
  int sum = calcVectorSum(vectorReference);
  int meanTest = calcVectorMean(vectorReference);

  std::cout << "Stats for " << vectorTitle
            << "  -  num numbers: " << vectorNumberQuantity << " | sum: " << sum
            << " | mean: " << meanTest << "\n";
}
