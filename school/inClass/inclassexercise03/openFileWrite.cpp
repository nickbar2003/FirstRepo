#include <iostream>
#include <fstream>


int main() {

std::ofstream outputFile;
std::string userInput1;
std::string userInput2;
std::string userInput3;

std::cout << "What would you like to write in the file?\n";
getline(std::cin, userInput1);

std::cout << "What would you like to write in the file?\n";
getline(std::cin, userInput2);

std::cout << "What would you like to write in the file?\n";
getline(std::cin, userInput3);

outputFile.open("newDataFile.txt");
outputFile << userInput1 << "\n" << userInput2 << "\n" << userInput3 << std::endl;
outputFile.close(); 








}