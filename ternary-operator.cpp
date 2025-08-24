#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1(if true) : expression2(if false);

    int grade;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail :(";

    return 0;
}