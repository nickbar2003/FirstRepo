#include "headerRos.h"


int main() {
    
    std::map<std::string, std::string> prayers = {

        {"hailMary", readPrayers("hailMary.txt")},
        {"ourFather", readPrayers("ourFather.txt")},
        {"dox", readPrayers("doxology.txt")},
        {"aCreed", readPrayers("aCreed.txt")},
        {"ohMyJesus", readPrayers("ohMyJesus.txt")},
    }; 
    
    printPrayers(prayers["hailMary"]);
    printPrayers(prayers["ourFather"]);
    printPrayers(prayers["dox"]);
    printPrayers(prayers["aCreed"]);
    printPrayers(prayers["ohMyJesus"]);
}

// Takes in file path and returns contents 
std::string readPrayers(std::string textFile) {
    std::string buffer;
    std::string curLine;
    std::fstream prayerFile;

    prayerFile.open(textFile);

    while (std::getline(prayerFile, curLine)) {
        buffer += curLine + "\n";
    }
    prayerFile.close();
    return buffer;
}

void printPrayers(std::string prayerName) {


    
    for(int index = 0; index < prayerName.size(); index++) {
        std::cout.flush();
        sleep_for(milliseconds(LOOP_DELAY_MS));
        std::cout << prayerName[index];
    }
    std::cout << "\n";
}


    
    



