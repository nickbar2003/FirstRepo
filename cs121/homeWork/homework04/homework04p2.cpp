#include <iostream>
#include <stdlib.h> 
#include <time.h> 





int main() {
    int maxValue = 10;  
    int secretNumber = -1;
    srand (time(NULL)); 
    secretNumber = (rand() % maxValue) + 1;
    
    int numberOfGuesses = 1; 
    int userInput = 0;
    
    


    while(numberOfGuesses <= 5) {


      

        std::cout << "Guess the number I'm thinking of between 1 and 10, you have 5 total guesses, this is guess " << numberOfGuesses << " go ahead try again: ";
        std::cin >> userInput;

       

        if(userInput == secretNumber && numberOfGuesses < 5) {
            std::cout << "You got it right!" << std::endl;
            numberOfGuesses = 6;
        } else if(numberOfGuesses == 5) {
            std::cout << "You ran out of guesses, thanks for playing!\n";
            numberOfGuesses = 6;
        } else if(userInput > secretNumber && numberOfGuesses < 5) {
            std::cout << "Too high! Try again\n ";
            numberOfGuesses++;
        } else if (userInput < secretNumber && numberOfGuesses < 5) {
            std::cout << "Too low! Try again\n ";
            numberOfGuesses++;
        }  
}


    

    return 0;
}


