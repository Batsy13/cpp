#include <iostream>

int main() {

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num = rand() % 6;

    int userNumber;

    std::cout << "Enter a number: (1-6) ";
    std::cin >> userNumber;

    if (userNumber == num){
        std::cout << "Gap abismo" << "\n";
    } else {
        std::cout << "Close" << "\n";
    }

    std::cout << num << "\n";

    return 0;
}