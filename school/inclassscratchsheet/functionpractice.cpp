#include <iostream>


int simplePrint() {
    std::cout << "I am simple print\n";\
    int myAge = 19;
return myAge;
}

int main() {
    std::cout << "Main is here" << std::endl;
    
    int resultValue = simplePrint();
   
    std:: cout << resultValue << "\n"; 
    std::cout << "End of Main" << std::endl;









    return 0;
}