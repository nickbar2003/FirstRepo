#include <iostream>
#include <fstream>

int main() {

    std::string line; 

    std::ifstream inputFile; 
    inputFile.open("example.txt");

    getline(inputFile, line);


    std::cout << line << std::endl; 



        



}