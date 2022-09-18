#include <iostream>




int main() {
    /* 
        We are going to make a food price look up program.
        The user should be able to look up a food and then see the current price
        or be told that it is out of stock or not carried.
    */
    std::cout << "welcome to my store\n";
    bool still_searching = true;

    while (still_searching) {
        std::cout << "enter a food you would like to purchase: ";
        std::string choice;
        std::cin >> choice;
        std::cout << "you entered " << choice << '\n';


        

        
        double bananas_price = 1.25;

        if (choice == "bananas") {
            std::cout << "bananas cost: $" << bananas_price << '\n';
        } else if (choice == "apples") {
            std::cout << "not in stock" << '\n';
        } else {std::cout << "not carried" << '\n'; } 

        std::cout << "still searching? yes or no: ";
        std::string user_input;
        std::cin >> user_input;

        still_searching = user_input == "yes";
        
        if (user_input != "yes" && user_input != "no") {
            std::cout << "invalid response\n";
        }

        // if (user_input == "yes") { 
        //     still_searching = true;   
        // } else if (user_input == "no") {
        //     still_searching = false;
        // } else {
        //     std::cout << "invalid response\n";
        //     still_searching = false;
        // }
    }
    return 0;
}