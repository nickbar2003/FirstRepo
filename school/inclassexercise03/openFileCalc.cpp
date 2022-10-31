#include <iostream>
#include <fstream>


int main() {

std::ifstream dataFile;
std::string intList = "";

dataFile.open("dataFile.dat");

if(dataFile.is_open()) {
   
while(getline(dataFile, intList)) {
    
    std::cout << intList << "\n";
    }
} else {

    std::cout << "Could not open file";
}

while(stoi(intList))
std::cout << intList;


}