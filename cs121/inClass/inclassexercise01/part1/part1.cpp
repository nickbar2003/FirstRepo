#include <iostream>

int main() {

    std::string numerator;
    std::string denominator;
    int quotient = 0;
    int remainder = 0;
    int product = 0;

    std::cout << "give me a numerator ";
    std::cin >> numerator;

    std::cout << "give me a denominator ";
    std::cin >> denominator;
    

    int numeratorInt = stoi(numerator);
    int denominatorInt = stoi(denominator);

    quotient = numeratorInt / denominatorInt;
    remainder = numeratorInt % denominatorInt;
    product = numeratorInt * denominatorInt;

    std::cout << "The result of " << numeratorInt << " / " << denominatorInt << " is "
    << quotient << " remainder " << remainder << std::endl; 
    
    std::cout << "The result of " << numeratorInt << " times " << denominatorInt << " is "
    << product << std::endl;

    return 0;
}