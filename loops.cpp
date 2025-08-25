#include <iostream>

int main() {

    std::string name;

    // while(condition) do something

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << "\n";

    // do while loop = do some block of code first,
    //                 then repeat again if condition is true

    int number;

    do{

        std::cout << "Enter a positive number: ";
        std::cin >> number;

    }while(number < 0);

    // for(variable declaration; condition; iteration) 

    for(int i = 1; i <= number; i++){
        std::cout << i << "\n";
    }  


    return 0;
}