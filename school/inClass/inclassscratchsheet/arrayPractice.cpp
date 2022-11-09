#include <iostream>


int main() {


    const int size = 4;
    int arrValues[size] = 0;
       


    for (int count = 0; count < size; count++) {

        int arrValues[count] = count--; 


    }
    for (int count = 0; count < size; count++){

        std::cout << arrValues[count];

    }




}