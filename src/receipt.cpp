/*
 *  Crandall's Receipt Generator
 */

#include <iostream>


int main() {
    // Allocate and set line items and their costs
    double milkCostUSD = 4.50;
    double orangesCostUSD = 2.75;
    double breadCostUSD = 5.50;

    double numberOfMilk = 3;
    double numberOfOranges = 5;
    double numberOfBread = 2;

    // Allocate subtotal and total
    double subtotal = 0;
    double total = 0;
    // Allocate tax rate
    double taxRatePct = 8.3 / 100;

    // Calculate subtotal
    subtotal = (milkCostUSD * numberOfMilk) + (orangesCostUSD * numberOfOranges) + (breadCostUSD * numberOfBread); 
    // Calculate tax cost
    double taxCost = taxRatePct * subtotal; 
    // Calculate total
    total = subtotal + (subtotal * taxCost);
    // Print out receipt
    std::cout << total << '\n';


}