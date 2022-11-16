#include <iostream>

int main() {
    int numRows = 5;
    int numColums = 5;
    int myArr[numRows][numColums];

    for (int row = 0; row < numRows; row++) {
        for (int colum = 0; colum < numColums; colum++ ) {
            myArr[row][colum] = colum;
            std::cout << myArr[row][colum] << " ";
        }
        std::cout << "\n";
    }
}
