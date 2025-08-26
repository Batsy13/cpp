#include <iostream>

int main() {

    // array = a data structure that can hold multiple values
    //         values are acessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string car[] = {"Corvette", "Mustang", "Up", "Impala"};

    for(int i = 0; i < sizeof(car) / sizeof(car[0]); i++){
        std::cout << car[i] << "\n";
    }

    std::string items[4];

    items[0] = "Computer";

    std::cout << items[0];

    return 0;
}