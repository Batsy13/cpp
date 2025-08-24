#include <iostream>

int main() {

    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    int age;

    std::cout << "Enter Your Age: " << "\n";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!" << "\n";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!";
    }
    else {
        std::cout << "You're not older enough to enter!";
    }

    return 0;
}