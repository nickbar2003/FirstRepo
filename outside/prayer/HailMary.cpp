#include <iostream>

int main() {

    std::string userInput;
    int theyDo = 1;
    int theyDont = 2;



    std::cout << "Do you believe in God, y/n? ";
    
    getline(std::cin, userInput);
   


   

    if (userInput == 1) {
        std::cout << "Amen\n Hail Mary\n Full of Grace\n The Lord is With Thee\n"
        << "Blessed Art Thou Amongst Women\n and Blessed is the Fruit of Thy Womb\n JESUS "
        << "Holy Mary/n Mother of God/n Pray for us Sinners\n";

    } else if (userInput == 2) {
        std::cout << "believe and he will set you free ";
        std::cout << "O My Jesus, Forigve us our sins\nSave Us From The Fires of Hell\n"
        << "Lead Alls Souls to Heavan, espacially those in Most Need of Thy Mercy";

    }

    
    
    return 0;

}