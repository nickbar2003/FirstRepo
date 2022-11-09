#include <iostream>

int main() {

    std::string name;
    std::string adjective;
    std::string noun;
    std::string adjective1; 
    std::string adjective2;   
    std::string verbalNoun;
    std::string name1;
    std::string noun1;
    std::string noun2;
    
    double averageNumberOfCharsMadlib1;
    double averageNumberOfCharsMadlib2;

    double numberOfSpacesMadlib1 = 3;
    double numberOfSpacesMadlib2 = 6;


            


    std::cout << "Give me a name"
    << std:: endl; 
    getline(std::cin, name);
    int numberOfCharsName = name.size();
    std::cout << "Give me an adjective"
    << std:: endl;
    getline(std::cin, adjective);
    int numberOfCharsAdjective = adjective.size();
    std::cout << "Give me a noun"
    << std:: endl;
    getline(std::cin, noun);
    int numberOfCharsNoun = noun.size();
    std::cout << "Please excuse " << name << " who is far too " << adjective << " to attend " << noun << " class" << std::endl;

    int numberOfCharsMadlib1 = numberOfCharsName + numberOfCharsAdjective + numberOfCharsNoun; 
    averageNumberOfCharsMadlib1 = numberOfCharsMadlib1 / numberOfSpacesMadlib1;

    std::cout << "The number of chars in the first madlib is " << numberOfCharsMadlib1 << std::endl;
    std::cout << "The average number of chars per place in the first madlib was " << averageNumberOfCharsMadlib1 << std::endl;

    std::cout << "lets play again, give me an adjective" << std::endl;
    getline(std::cin, adjective1);
    int numberOfCharsAdjective1 = adjective1.size();
    std::cout << "give me another adjective" << std::endl;
    getline(std::cin, adjective2);
    int numberOfCharsAdjective2 = adjective2.size();
    std::cout << "give me a verbal noun" << std::endl;
    getline(std::cin, verbalNoun);
    int numberOfCharsVerbalNoun = verbalNoun.size();
    std::cout << "give me a noun" << std::endl;
    getline(std::cin, noun1);
    int numberOfCharsNoun1 = noun1.size();
    std::cout << "give me another noun" << std::endl;
    getline(std::cin, noun2);
    int numberOfCharsNoun2 = noun2.size();
    std::cout << "give me a name" << std::endl;
    getline(std::cin, name1);
    int numberOfCharsName1 = name1.size();

    std::cout << "While the " << adjective1 << " " << name1 << " has never been known to shy away from a(n) " << adjective2 << " day of " 
    << verbalNoun << " " << noun1 << ", he/she will never be seen in a(n) " << noun2 << std::endl;

    int numberOfCharsMadLib2 = numberOfCharsAdjective1 + numberOfCharsAdjective2 + numberOfCharsVerbalNoun + numberOfCharsNoun1 + numberOfCharsNoun2 + 
    numberOfCharsName1;
    averageNumberOfCharsMadlib2 = numberOfCharsMadLib2 / numberOfSpacesMadlib2;

    std::cout << "The number of chars in the second madlib is " << numberOfCharsMadLib2 << std::endl;
    std::cout << "The average number of chars per place in the second madlib was " << averageNumberOfCharsMadlib2 << std::endl;






                

    return 0;


}