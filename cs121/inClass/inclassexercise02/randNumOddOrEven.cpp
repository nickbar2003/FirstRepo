#include <iostream>
#include <stdlib.h> 
#include <time.h> 




int main() {

    int maxValue = 1000;
    int secretNumber = -1;
    srand (time(NULL));

    int randomNumber = (rand() % maxValue) + 1;

    int oddOrEven = randomNumber % 2;

    if(oddOrEven == 0) {

        std::cout << "The Random Number " << randomNumber << " is even!\n";
    } else {

        std::cout << "The Random Number " << randomNumber << " is odd!\n";

        return 0;
    }


}