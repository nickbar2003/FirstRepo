#include <iostream>
#include <stdlib.h> 
#include <time.h> 





int main() {
    int maxValue = 10;  
    int secretNumber = -1;
    srand (time(NULL)); 
    secretNumber = (rand() % maxValue) + 1;
    
    bool a = true;
    int userInput = 0;
    
    


    while(a) {
        std::cout << "Guess the number I'm thinking of between 1 and 10: ";
        std::cin >> userInput;

        if(userInput == secretNumber) {
            std::cout << "You got it right!" << std::endl;
            a = 0;
        } else if(userInput > secretNumber) {
            std::cout << "Too high! Try again ";
        } else if (userInput < secretNumber) {
            std::cout << "Too low! Try again ";
        }





    }





}