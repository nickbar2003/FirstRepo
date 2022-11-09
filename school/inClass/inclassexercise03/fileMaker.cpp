#include <iostream>
#include <fstream>


int main() {
    std::ofstream dataFile;
    for(int counter = 0; counter < 20; counter++) {
        


        if(counter < 10) {

        dataFile.open("./data/" "dataFile0" + std::to_string(counter) + ".txt");
        } else if(counter >= 10) {
         dataFile.open("./data/ " "dataFile" + std::to_string(counter) + ".txt");   
        }

    dataFile << "This is data file #" << counter << " and its data";  
        
    }
    dataFile.close();
    std::cout << "File is closed";


}