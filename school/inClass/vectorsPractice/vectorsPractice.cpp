#include <iostream>
#include <vector>

int main() {

    std::vector<int> myIntsVector(100); 

    std::vector<std::string> myStringVector(10);

    std::vector<std::string> anotherStringVector(5, "Bob");

    std::vector<int> anotherIntsVector{1, 2, 3, 4, 5, 6, 6};

    std::cout << myIntsVector.at(0) << "\n" << myStringVector.at(0) << "\n" << anotherStringVector.at(0) << "\n" << anotherIntsVector.at(0);



    std::cout << anotherIntsVector.size() << "\n";


    for(int count = 0; count < anotherIntsVector.size(); count ++) {

        std::cout << anotherIntsVector.at(count);


        anotherIntsVector.push_back(1);

    }


}