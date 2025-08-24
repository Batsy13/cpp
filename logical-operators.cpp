#include <iostream>

int main() {

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

    double temp = 24;
    bool sunny = true;

    if ( temp >= 15 && temp <= 24 ){
        std::cout << "The temperature is good!" << "\n";
    } else if ( temp < 15 || temp > 24 ) {
        std::cout << "The temperature is bad!" << "\n";
    }

    if (!sunny) {
        std::cout << "It's coudly outside!" << "\n";
    } else {
        std::cout << "It's sunny outside!" << "\n";
    }

    return 0;
}