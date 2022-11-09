#include <iostream>

int main() {
    double fundraisingGoal = 300.0;
    double priceOfCookies = 2.50;
    double priceOfBrownies = 3.75;

    int numberOfCookies = fundraisingGoal / priceOfCookies;
    int numberOfBrownies = fundraisingGoal / priceOfBrownies;

    std::cout << "To make our fundraising goal of $" << fundraisingGoal << ", we would need to sell ";
    std::cout << numberOfCookies << " cookies at $" << priceOfCookies << std::endl;
    std::cout << "To make our fundraising goal of $" << fundraisingGoal << ", we would need to sell ";
    std::cout << numberOfBrownies << " Brownies at $" << priceOfBrownies << std::endl;   
}
