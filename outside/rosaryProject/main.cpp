#include "headerRos.h"

std::map<std::string, std::string> prayers = {
    {"hailMary", readPrayers("hailMary.txt")},
    {"ourFather", readPrayers("ourFather.txt")},
    {"dox", readPrayers("doxology.txt")},
    {"aCreed", readPrayers("aCreed.txt")},
    {"ohMyJesus", readPrayers("ohMyJesus.txt")},
    {"theAnnunciation", readPrayers("theAnnunciation.txt")},
    {"theVisitation", readPrayers("theVisitation.txt")},
    {"theBirthOfJesus", readPrayers("theBirthOfJesus.txt")},
    {"thePresentation", readPrayers("thePresentation.txt")},
    {"theFinding", readPrayers("theFinding.txt")},
    {"theAgonyOfJesus", readPrayers("theAgonyOfJesus.txt")},
    {"theScourging", readPrayers("theScourging.txt")},
    {"theCrowning", readPrayers("theCrowning.txt")},
    {"theCarrying", readPrayers("theCarrying.txt")},
    {"theCrucifixion", readPrayers("theCrucifixion.txt")},
    {"theBaptism", readPrayers("theBaptism.txt")},
    {"theWeddingFeast", readPrayers("theWeddingFeast.txt")},
    {"theComingOfTheKingdom", readPrayers("theComingOfTheKingdom.txt")},
    {"theTransfiguration", readPrayers("theTransfiguration.txt")},
    {"theInstitution", readPrayers("theInstitution.txt")},
    {"theResurrection", readPrayers("theResurrection.txt")},
    {"theAscension", readPrayers("theAscension.txt")},
    {"theGift", readPrayers("theGift.txt")},
    {"theAssumption", readPrayers("theAssumption.txt")},
    {"theCoronation", readPrayers("theCoronation.txt")},
    {"salveRegina", readPrayers("salveRegina.txt")},
};

int main() {

  bool praying = true;
  char rosaryType;
  char *rosaryTypePtr = nullptr;
  rosaryTypePtr = &rosaryType;

  determineRosType(rosaryTypePtr);

  while (praying) {

    printPrayers(prayers["aCreed"]);
    std::cout << "    For increase in Faith\n\n";
    printPrayers(prayers["hailMary"]);
    std::cout << "    For increase in Hope\n\n";
    printPrayers(prayers["hailMary"]);
    std::cout << "    For increase in Love\n\n";
    printPrayers(prayers["hailMary"]);

    printPrayers(prayers["dox"]);

    switch (rosaryType) {
    case 'j': {
      printPrayers(prayers["theAnnunciation"]);
    } break;
    case 's': {
      printPrayers(prayers["theAgonyOfJesus"]);
    } break;
    case 'l': {
      printPrayers(prayers["theBaptism"]);
    } break;
    case 'g': {
      printPrayers(prayers["theResurrection"]);
    } break;
    }
    printPrayers(prayers["ourFather"]);

    for (int count = 0; count < DECADE; count++) {
      printPrayers(prayers["hailMary"]);
    }
    printPrayers(prayers["ohMyJesus"]);
    printPrayers(prayers["dox"]);

    switch (rosaryType) {
    case 'j': {
      printPrayers(prayers["theVisitation"]);
    } break;
    case 's': {
      printPrayers(prayers["theScourging"]);
    } break;
    case 'l': {
      printPrayers(prayers["theWeddingFeast"]);
    } break;
    case 'g': {
      printPrayers(prayers["theAscension"]);
    } break;
    }
    printPrayers(prayers["ourFather"]);

    for (int count = 0; count < DECADE; count++) {
      printPrayers(prayers["hailMary"]);
    }

    printPrayers(prayers["ohMyJesus"]);
    printPrayers(prayers["dox"]);

    switch (rosaryType) {
    case 'j': {
      printPrayers(prayers["theBirthOfJesus"]);
    } break;
    case 's': {
      printPrayers(prayers["theCrowning"]);
    } break;
    case 'l': {
      printPrayers(prayers["theComingOfTheKingdom"]);
    } break;
    case 'g': {
      printPrayers(prayers["theGift"]);
    } break;
    }
    printPrayers(prayers["ourFather"]);

    for (int count = 0; count < DECADE; count++) {
      printPrayers(prayers["hailMary"]);
    }
    printPrayers(prayers["ohMyJesus"]);
    printPrayers(prayers["dox"]);

    switch (rosaryType) {
    case 'j': {
      printPrayers(prayers["thePresentation"]);
    } break;
    case 's': {
      printPrayers(prayers["theCarrying"]);
    } break;
    case 'l': {
      printPrayers(prayers["theTransfiguration"]);
    } break;
    case 'g': {
      printPrayers(prayers["theAssumption"]);
    } break;
    }
    printPrayers(prayers["ourFather"]);

    for (int count = 0; count < DECADE; count++) {
      printPrayers(prayers["hailMary"]);
    }
    printPrayers(prayers["ohMyJesus"]);
    printPrayers(prayers["dox"]);

    switch (rosaryType) {
    case 'j': {
      printPrayers(prayers["theFinding"]);
    } break;
    case 's': {
      printPrayers(prayers["theCrucifixion"]);
    } break;
    case 'l': {
      printPrayers(prayers["theInstitution"]);
    } break;
    case 'g': {
      printPrayers(prayers["theCoronation"]);
    } break;
    }
    printPrayers(prayers["ourFather"]);

    for (int count = 0; count < DECADE; count++) {
      printPrayers(prayers["hailMary"]);
    }
    printPrayers(prayers["salveRegina"]);
    praying = false;
  }
}
// Takes in file path and returns contents
std::string readPrayers(std::string filename) {
  std::string buffer;
  std::string curLine;
  std::fstream prayerFile;

  // prayerFiles/hailFury.txt
  prayerFile.open("prayerFiles/" + filename);

  while (std::getline(prayerFile, curLine)) {
    buffer += curLine + "\n";
  }
  prayerFile.close();
  return buffer;
}

// Prints out prayer text
// TODO BOUDNARY CHECK FOR N+1 LOOK AHEAD
void printPrayers(std::string prayerText) {

  bool printingRed = false;
  for (int index = 0; index < prayerText.size(); index++) {
    std::cout.flush();
    sleep_for(milliseconds(LOOP_DELAY_MS));
    if (prayerText[index] == 'J' || prayerText[index + 4] == 's') {
      printingRed = true;
    }
    std::cout << "\n";
  }
}
// sets rosary type
void determineRosType(char *rosaryType) {

  int day;
  int season;
  bool asking = true;
  bool determing = true;
  std::string userInputDay;
  std::string userInputSeason;
  while (asking) {
    std::cout << "Welcome to the my Rosary Program\n"
              << "What day is it? ";
    getline(std::cin, userInputDay);

    if (userInputDay == "Sunday") {
      day = 0;
      std::cout << "Is it Advent, Lent, or Ordinary Time? ";
      getline(std::cin, userInputSeason);
      if (userInputSeason == "Advent") {
        season = 0;
        asking = false;
      } else if (userInputSeason == "Lent") {
        season = 1;
        asking = false;
      } else if (userInputSeason == "Ordinary Time") {
        season = 2;
        asking = false;
      } else {
        std::cout << "Please restart\n";
      }
    } else if (userInputDay == "Monday") {
      day = 1;
      asking = false;
    } else if (userInputDay == "Tuesday") {
      day = 2;
      asking = false;
    } else if (userInputDay == "Wednesday") {
      day = 3;
      asking = false;
    } else if (userInputDay == "Thursday") {
      day = 4;
      asking = false;
    } else if (userInputDay == "Friday") {
      day = 5;
      asking = false;
    } else if (userInputDay == "Saturday") {
      day = 6;
      asking = false;
    } else {
      std::cout << "Please restart\n";
    }
  }

  while (determing) {
    if (day == 0 && season == 0) {
      *rosaryType = 'j';
      std::cout << "\nPraying the Joyful mysteries\n\n";
    } else if (day == 0 && season == 1) {
      *rosaryType = 's';
      std::cout << "\nPraying the Sorrowful mysteries\n\n";
    } else if (day == 0 && season == 2) {
      *rosaryType = 'g';
      std::cout << "\nPraying the Glorious mysteries\n\n";
    } else if (day == 1) {
      *rosaryType = 'j';
      std::cout << "\nPraying the Joyful mysteries\n\n";
    } else if (day == 2) {
      *rosaryType = 's';
      std::cout << "\nPraying the Sorrowful mysteries\n\n";
    } else if (day == 3) {
      *rosaryType = 'g';
      std::cout << "\nPraying the Glorious mysteries\n\n";
    } else if (day == 4) {
      *rosaryType = 'l';
      std::cout << "\nPraying the Luminous mysteries\n\n";
    } else if (day == 5) {
      *rosaryType = 's';
      std::cout << "\nPraying the Sorrowful mysteries\n\n";
    } else if (day == 6) {
      *rosaryType = 'j';
      std::cout << "\nPraying the Joyful mysteries\n\n";
    }
    determing = false;
  }
}
