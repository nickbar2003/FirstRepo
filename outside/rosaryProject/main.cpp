#include "headerRos.h"


int main() {

    int arraySize = 10;
    int test[arraySize];



    for(int count = 0; count <arraySize; count++){
        test[count] = 101;

    }

    while(stillPraying) {
        sleep_for(milliseconds(loopDelay_ms));
        for(int count = 0; count < arraySize; count++){
            
            
            std::cout << test[count] << " ";
            
        }
        std::cout << "\n";
        stillPraying = 0;



    }
    





}


