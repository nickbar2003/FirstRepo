#include <iostream>

int main() {
    double priceOfCookies = 2.50;
    double priceOfBrownies = 3.75;

    double ingredientCostCookie = .10;
    double ingredientCostBrownie = .17;
    
    double totalCookiesSold = 43;
    double totalBrowniesSold = 63;

    double totalMoneyMade = (priceOfCookies * totalCookiesSold) + (priceOfBrownies * totalBrowniesSold);
    double totalcost = (ingredientCostCookie * totalCookiesSold) + (ingredientCostBrownie * totalBrowniesSold);
    double totalProfit = totalMoneyMade - totalcost;

    std::cout << "we made a total of $" << totalProfit << " by selling " << totalCookiesSold << " cookies at $" 
    << priceOfCookies << " and " << std::endl << totalBrowniesSold 
    << " brownies at $" << priceOfBrownies << " when ingredients cost $" <<  ingredientCostCookie << " for cookies and $" 
    << ingredientCostBrownie << " for brownies" << std::endl;
}