#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

int main() {


    
    
    std::vector<int> randomInsVector;
    srand (time(NULL));


    for(int count = 0; count < 10; count++) {
        int maxRandNum = 10;
        int randNum = -1;

        
        randNum = (rand() % maxRandNum) + 1;

        randomInsVector.push_back(randNum);
        
    }
    for(int count = 0; count < randomInsVector.size(); count++) {

        std::cout << randomInsVector.at(count) << "\n";

    }


}