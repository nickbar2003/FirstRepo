#include <iostream>

void printOutArray(int arr[], int arrSize);
void printOutArrayReverse(int arr[], int arrSize);
int sumOfArrayElements(int arr[], int arrSize);

int main() {

  int sumResult = 0;

  const int arrSize = 21;
  int arr[arrSize] = {63, 15, 72, -1, 15, 0,  50, 19, 78, -3, 79,
                      8,  67, 30, 44, 7,  37, 22, 17, 27, 48};
  // printOutArray(arr, arrSize);
  // printOutArrayReverse(arr, arrSize);
  sumResult = sumOfArrayElements(arr, arrSize);
  std::cout << sumResult << "\n";
}

void printOutArray(int arr[], int arrSize) {

  for (int count = 0; count < arrSize; count++) {
    std::cout << arr[count] << " ";
  }
  std::cout << "\n";
}

void printOutArrayReverse(int arr[], int arrSize) {
  for (int count = arrSize - 1; count >= 0; count--) {
    std::cout << arr[count] << " ";
  }
  std::cout << "\n";
}

int sumOfArrayElements(int arr[], int arrSize) {
  int result = 0;
  int sum = 0;
  for (int count = 0; count < arrSize; count++) {
    sum = sum + arr[count];
    result = sum;
  }

  return result;
}