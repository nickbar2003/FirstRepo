#include <iostream>

int main() {
    
    std::string name;
    std::string adjective;
    std::string noun;

    std::cout << "Give me a name"
    << std:: endl; 
    getline(std::cin, name);

    std::cout << "Give me an adjective"
    << std:: endl;
    getline(std::cin, adjective);

    std::cout << "Give me a noun"
    << std:: endl;
    getline(std::cin, noun);

    std::cout << "Please excuse " << name << " who is far too " << adjective << " to attend " << noun << " class" << std::endl;

    return 0; 
}   