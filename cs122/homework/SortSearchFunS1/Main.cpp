#include "SortSearchAlgs.h"

int main() {

  std::vector<int> sortedVector500(500);
  std::vector<int> sortedVector1000;
  std::vector<int> sortedVector5000;
  std::vector<int> sortedVector10000;
  std::vector<int> sortedDescendingVector500;
  std::vector<int> sortedDescendingVector1000;
  std::vector<int> sortedDescendingVector5000;
  std::vector<int> sortedDescendingVector;
  std::vector<int> randomVector500;
  std::vector<int> randomVector1000;
  std::vector<int> randomVector5000;
  std::vector<int> randomVector10000;

  initializeVectorAscending(sortedVector500);

  printVector(sortedVector500);
  return 0;
}
