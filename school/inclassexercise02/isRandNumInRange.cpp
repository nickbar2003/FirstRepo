#include <iostream>
#include <stdlib.h> 
#include <time.h> 




int main() {

    int maxValue = 1000;
    int secretNumber = -1;
    int x = 150;
    int y = 210;
    int j = 635;
    int k = 792;

    srand (time(NULL));
    int randomNumber = (rand() % maxValue) + 1;

    bool a = (x < randomNumber && randomNumber < y);
    bool b = (x > randomNumber || y < randomNumber);


    switch (randomNumber)
    {
        case '' : std::cout << randomNumber << " is between 150 and 210";
              break;
        case 'b' : std:: cout << randomNumber << " is outside the range!";
                    break;              


    }


    return 0;
}