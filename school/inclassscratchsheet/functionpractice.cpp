#include <iostream>


double mulDoubles(double, double); 
double divInts(int, int);    
bool isPositive(int);


int main() {

    double muldoubleResult = mulDoubles(6.4, 4.5);
    double divIntsResult = divInts(80, 6);
    bool isPositiveResult = isPositive(60);



    std::cout << "Doubles mul: " << muldoubleResult << std::endl;
    std::cout << "Ints div: " << divIntsResult << std::endl;
    std::cout << "bool res: " << isPositiveResult << std::endl; 


    return 0;
}


double mulDoubles(double firstDouble, double secondDouble) {

    double result;

    result = firstDouble * secondDouble;
    
    return result;
}

double divInts(int num, int den) {

    double result;
    double numDoulbe = (double)num;
    double denDouble = (double)den;

    result = numDoulbe / denDouble;



    return result;
}

bool isPositive(int valueToCheck) {

    bool result = false;

    if(valueToCheck > 0) {
        result = true;
    } else {
        result = false;
    }




    return result;
}