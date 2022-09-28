#include <iostream>


int main () {


    std::string whatsWrong;
    char theirAnswer;
    bool loopTool = true;

    



    std::cout << "whats wrong? ";
    getline(std::cin, whatsWrong); 

    std::cout << "You said: " << whatsWrong << std::endl << "Know you this God loves you, Christ will not turn from those that come with a contrite heart\n"
    << "Temptation is an opportunity to choose Christ and grow in virtue, God is the unending I AM\n"
    << "May I pray for you (y/n) ";
    std::cin >> theirAnswer;
    
    

    while (loopTool) {
    if(theirAnswer == 'y') {


        std::cout << "HAIL MARY FULL OF GRACE\n THE LORD IS WITH THEE\n BLESSED ART THOU AMONGST WOMEN AND BLESSED IS THE FRUIT OF THY WOMB\n JESUS\n"
        << "HOLY MARY MOTHER OF GOD\n PRAY FOR US SINNERS NOW AND AT THE HOUR OF OUR DEATH\n AMEN";
    } else if(theirAnswer == 'n') {

        std::cout << "I will prayer for you anyways" << std::endl;
        std::cout << "HAIL MARY FULL OF GRACE\n THE LORD IS WITH THEE\n BLESSED ART THOU AMONGST WOMEN AND BLESSED IS THE FRUIT OF THY WOMB\n JESUS\n"
        << "HOLY MARY MOTHER OF GOD\n PRAY FOR US SINNERS NOW AND AT THE HOUR OF OUR DEATH\n AMEN";
    } else {
        std::cout << "I will pray for you no matter what";
    }
    }
   
    return 0;



    




}