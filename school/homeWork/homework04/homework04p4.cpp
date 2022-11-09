#include <iostream>
#include <stdlib.h> 
#include <time.h> 





int main() {
    int maxValue = 10;  
    int secretNumber = -1;
    int numberOfGuesses = 1; 
    int userInput = 0;
    int divisionResult = 0;

    std::string stringTest = "";
    std::string maxVal;  

    std::cout << "This is a guessing game, before we start what is the max value you would like to play with? ";
    getline(std::cin, maxVal);

    maxValue = stoi(maxVal);

    srand (time(NULL)); 
    secretNumber = (rand() % maxValue) + 1;
    
    divisionResult = maxValue / 3;


    while(numberOfGuesses <= 5) {


      
  
        std::cout << "Guess the number I'm thinking of between 1 and "<< maxValue<< ", you have 5 total guesses, this is guess " << numberOfGuesses << " go ahead try again: ";
        std::cin >> stringTest;

       if(stringTest == "S") {
            std::cout << "Cheat code activated, the secret number is " << secretNumber << std::endl;
        } else if(stringTest == "h" && secretNumber <= divisionResult) {
            std::cout << "Hint activated, the secret number is a low number\n";
        } else if(stringTest == "h" && secretNumber >= (2 * divisionResult)) {
            std::cout << "Hint activated, the secret number is a high number\n";
        } else if(stringTest == "h" && divisionResult > secretNumber < (2 * divisionResult)) {
            std::cout << "Hint activated, the secret number is a mid number\n";
        } else {
            userInput = stoi(stringTest);
        }





        if(userInput == secretNumber) {
            std::cout << "You got it right!" << std::endl;
            numberOfGuesses = 6;
        } else if(numberOfGuesses == 5) {
            std::cout << "You ran out of guesses, thanks for playing!\n";
            numberOfGuesses = 6;
        } else if(userInput < secretNumber && userInput != 0) {
            std::cout << "Too low! Try again\n ";
            numberOfGuesses++;
        } else if (userInput > secretNumber) {
            std::cout << "Too high! Try again\n ";
            numberOfGuesses++;
        }      

}


    

    return 0;
}
