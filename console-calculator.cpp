#include <iostream>

int main() {

    char op;
    int num1, num2;

    std::cout << "Enter an operation ( * / + - ): ";
    std::cin >> op;

    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    double result;

    switch(op) {
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        default:
            std::cout << "Enter with an valid operator ( * / + - )";
    }

    std::cout << "The result of " << num1 << op << num2 << " is " << result;



    return 0;
}