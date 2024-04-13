#include <iostream>

int main() {

    /* 
     While the (adjective1) (Name) has never been known to shy away from a (adjective2)
      day of (adjective3) (noun1), he/she will never be seen in a(n) (noun2)
    */

  std::string adjective1; 
  std::string adjective2;   
  std::string verbalNoun;
  std::string name;
  std::string noun1;
  std::string noun2;

  std::cout << "give me an adjective" << std::endl;
  getline(std::cin, adjective1);
  std::cout << "give me another adjective" << std::endl;
  getline(std::cin, adjective2);
  std::cout << "give me a verbal noun" << std::endl;
  getline(std::cin, verbalNoun);
  std::cout << "give me a noun" << std::endl;
  getline(std::cin, noun1);
  std::cout << "give me another noun" << std::endl;
  getline(std::cin, noun2);
  std::cout << "give me a name" << std::endl;
  getline(std::cin, name);

  std::cout << "While the " << adjective1 << " " << name << " has never been known to shy away from a(n) " << adjective2 << " day of " 
  << verbalNoun << " " << noun1 << ", he/she will never be seen in a(n) " << noun2 << std::endl;


  return 0;
}