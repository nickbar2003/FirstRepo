#include "SortSearchAlgs.h"

void printVector(std::vector<int> &vectorCopy) {
  int i = 0;
  for (i = 0; i < vectorCopy.size(); i++) {
    cout << vectorCopy[i] << ", ";
  }
  cout << vectorCopy[i] << endl;
}

void testSortingAlgorithms() {
  int nums[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
  int nums2[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
  int nums3[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
  int size = 9;

  // printVector(nums, size);

  cout << "Selection Sort" << endl;
  selectionSortVectorGaddis(nums, size);
  // printVector(nums, size);

  cout << "Bubble Sort" << endl;
  bubbleSortVectorGaddis(nums2, size);
  // printVector(nums2, size);

  cout << "Insertion Sort" << endl;
  insertionSortVector(nums3, size);
  // printVector(nums3, size);
}

// adapted from Gaddis
//***************************************************
// The swap function swaps a and b in memory.       *
//***************************************************
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// adapted from Gaddis
//********************************************************************
// The selectionSort function sorts an int array in ascending order. *
//********************************************************************
void selectionSortVectorGaddis(int array[], int size) {
  int minIndex, minValue;

  for (int start = 0; start < (size - 1); start++) {
    minIndex = start;
    minValue = array[start];
    for (int index = start + 1; index < size; index++) {
      if (array[index] < minValue) {
        minValue = array[index];
        minIndex = index;
      }
    }
    swap(array[minIndex], array[start]);
  }
}

// adapted from Gaddis
//*****************************************************************
// The bubbleSort function sorts an int array in ascending order. *
//*****************************************************************
void bubbleSortVectorGaddis(int array[], int size) {
  int maxElement;
  int index;

  for (maxElement = size - 1; maxElement > 0; maxElement--) {
    for (index = 0; index < maxElement; index++) {
      if (array[index] > array[index + 1]) {
        swap(array[index], array[index + 1]);
      }
    }
  }
}

void insertionSortVector(int arr[], int size) {
  int i, j, currValue;

  for (i = 1; i < size; i++) {
    currValue = arr[i];
    j = i - 1;
    while (j >= 0 && currValue < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = currValue;
  }
}

void initializeVectorAscending(std::vector<int> &vector) {
  for (int i = 0; i < vector.size(); i++) {
    vector[i] = i;
  }
}

void initializeVectorDescending(std::vector<int> &vector) {
  for (int i = vector.size(); i <= 0; i--) {
    vector[i] = i;
  }
}

void initalizeVectorRandom(std::vector<int> &vector) {
  int maxValue = 10000;

  for (int i = 0; i < vector.size(); i++) {
    srand(time(NULL));
    int value = (rand() % maxValue) + 1;
    vector[i] = value;
  }
}

// These functions are not pertinate to the assignment and were cloned from the
// repo

/*void testSearchingAlgorithms() {
  int nums[] = {7, 4, 6, 9, 10, 2, 5, 3, 8};
  int size = 9;
  int index = -1;

  printVector(nums, size);

  cout << "Linear Search" << endl;
  index = linearSearchArray(nums, size, 7); // first item
  cout << index << endl;
  index = linearSearchArray(nums, size, 8); // last item
  cout << index << endl;
  index = linearSearchArray(nums, size, 11); // not found
  cout << index << endl;

  // need to sort first for binary search
  insertionSortVector(nums, size);
  cout << "Binary Search" << endl;
  index = binarySearchArrayGaddis(nums, size, 7); // first item
  cout << index << endl;
  index = binarySearchArrayGaddis(nums, size, 8); // last item
  cout << index << endl;
  index = binarySearchArrayGaddis(nums, size, 11); // not found
  cout << index << endl;
}

int linearSearchArray(const int arr[], int n, int target) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

// adapted from Gaddis
//*****************************************************************
// The linearSearch function performs a linear search on an       *
// integer array. The array arr, which has a maximum of size      *
// elements, is searched for the number stored in value. If the   *
// number is found, its array subscript is returned. Otherwise,   *
// -1 is returned indicating the value was not in the array.      *
//*****************************************************************
int linearSearchArrayGaddis(const int arr[], int size, int value) {
  int index = 0;      // Used as a subscript to search array
  int position = -1;  // To record position of search value
  bool found = false; // Flag to indicate if the value was found

  while (index < size && !found) {
    if (arr[index] == value) { // If the value is found
      found = true;            // Set the flag
      position = index;        // Record the value's subscript
    }
    index++; // Go to the next element
  }
  return position; // Return the position, or -1
}

// adapted from Gaddis
//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, -1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************
int binarySearchArrayGaddis(const int array[], int size, int value) {
  int first = 0,       // First array element
      last = size - 1, // Last array element
      middle,          // Mid point of search
      position = -1;   // Position of search value
  bool found = false;  // Flag

  while (!found && first <= last) {
    middle = (first + last) / 2;  // Calculate mid point
    if (array[middle] == value) { // If value is found at mid
      found = true;
      position = middle;
    } else if (array[middle] > value) // If value is in lower half
      last = middle - 1;
    else
      first = middle + 1; // If value is in upper half
  }
  return position;
} */
