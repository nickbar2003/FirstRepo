#include "ptr_header.h"

int main() {
  int *intPtr = nullptr;
  double *doublePtr = nullptr;

  std::string *stringPtr = nullptr;

  intPtr = &varA;
  doublePtr = &daysInAYear;
  stringPtr = &programName;

  std::cout << "This is the pointer program" << std::endl;

  std::cout << "Part 1 and some demo code - max!" << std::endl;
  std::cout << "starting value for varA is: " << varA << std::endl;
  std::cout << "starting value for varB is: " << varB << std::endl;
  swap(&varA, &varB);
  std::cout << "swapped value for varA is: " << varA << "\n";
  std::cout << "swapped value for varB is: " << varB << "\n";
  std::cout << "Max of these two is: " << max(&varA, &varB) << std::endl;

  std::cout << "Adress " << intPtr << " is storing an int " << *intPtr << "\n";
  std::cout << "Adress " << doublePtr << " is storing a double " << *doublePtr
            << "\n";
  std::cout << "Adress " << stringPtr << " is storing a string " << *stringPtr
            << "\n";
  std::cout << "The sum of the monthlyBills_USD array is "
            << totalOfBills(monthlyBills_USD, studentCount) << "\n";
  printStudentNames(studentNames, studentCount);
  printOutStudentSummary(studentNames, studentAges_yrs, monthlyBills_USD,
                         studentCount);
  raiseBills(monthlyBills_USD, studentCount, monthlyRateIncrease_pct);
  std::cout << " raising bills\n\n";
  printOutStudentSummary(studentNames, studentAges_yrs, monthlyBills_USD,
                         studentCount);

  // printStudentNames(studentNames, studentCount);
}

int max(int *a, int *b) {
  if (*a > *b) {
    return *a;
  } else {
    return *b;
  }
}

void swap(int *a, int *b) {
  int varAValue = 0;
  int varBValue = 0;
  varAValue = *a;
  varBValue = *b;

  *b = varAValue;
  *a = varBValue;
}

double totalOfBills(double *billArr, int billsQuantity) {
  double sum = 0;

  for (int i = 0; i < billsQuantity; i++) {
    sum = sum + billArr[i];
  }
  return sum;
}

void printStudentNames(std::string *names, int namesCount) {
  std::cout << "Printing all student names\n";
  for (int i = 0; i < namesCount; i++) {
    std::cout << "Name[" << i << "]: " << names[i] << "\n";
  }
  std::cout << "\n\n";
}

void printOutStudentSummary(std::string *names, int *ages, double *monthlyBills,
                            int numStudents) {
  std::cout << "Printing student sumarries\n";
  for (int i = 0; i < numStudents; i++) {
    std::cout << "Student " << (i + 1) << ": " << names[i] << ", age "
              << ages[i] << ", bills $" << monthlyBills[i] << "\n";
  }
}

void raiseBills(double *bills, int billsCount, double billIncreasePct) {
  for (int i = 0; i < billsCount; i++) {
    bills[i] = bills[i] * (1 + billIncreasePct / 100);
  }
  std::cout << "\n";
}