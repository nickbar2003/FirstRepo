#include <iostream>

int main() {
    double fundraisingGoal = 300.0;
    double priceOfCookies = 2.50;
    double priceOfBrownies = 3.75;

    int numberOfCookies = fundraisingGoal / priceOfCookies;
    int numberOfBrownies = fundraisingGoal / priceOfBrownies;

    double neededFunds = fundraisingGoal - (priceOfCookies * 30);
    double totalBrowniesNeededToSell = neededFunds / priceOfBrownies;

    std::cout << "To make our fundrasing goal of $" << fundraisingGoal << " when we have already sold" << std::endl;
    std::cout << "30 cookies at $" << priceOfCookies << ", we would need to sell " << totalBrowniesNeededToSell << " at $" << priceOfBrownies << std::endl;
}