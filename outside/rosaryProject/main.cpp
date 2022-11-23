#include "headerRos.h"


int main() {
    
    joyfulRos();
    
    

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

}

void joyfulRos() {
    std::string aCreed = readPrayers("aCreed.txt");
    std::string hailMary = readPrayers("hailMary.txt");
    std::string dox = readPrayers("doxology.txt");
    std::string ohMyJesus = readPrayers("ohMyJesus.txt");
    std::string ourFather = readPrayers("ourFather.txt");

    std::cout << "The Joyful \n\n";
    printPrayers(aCreed);
    std::cout << "For increase in Faith\n\n";
    printPrayers(hailMary);
    std::cout << "For increase in Hope\n\n";
    printPrayers(hailMary);
    std::cout << "For increase in Love\n\n";
    printPrayers(hailMary);
    printPrayers(dox);
    std::cout << "The first joyful mystery: The Annunciation\n\n";
    for(int count = 0; count < DECADE; count++) {
        printPrayers(hailMary);
    }



}