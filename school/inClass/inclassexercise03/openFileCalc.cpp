#include <iostream>
#include <fstream>

std::string dataCollect();


int main() {
    std::string intList;
    intList = dataCollect();

    while(std::cin >> intList) {

        int numbersRead = 0;
        stoi(inlist)


    numbersRead++;
    }
    
    



}





std::string dataCollect() {

    std::ifstream dataFile;
    std::string intListAsString = "";
    std:: string result = "";

    dataFile.open("dataFile.dat");

    if(dataFile.is_open()) {
   
        while(getline(dataFile, intListAsString)) {}

    } else {

    std::cout << "Could not open file";
}

result = intListAsString;  
return result;


}
