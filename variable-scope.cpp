#include <iostream>

int num = 3;

void printNum();
void printGlobalNum();

int main() {

    int myNum = 1;

    std::cout << myNum << "\n";

    printNum();

    printGlobalNum();

    int num = 42;
    std::cout << ::num << "\n"; // Scope Resolution Operator

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << "\n";
}

void printGlobalNum(){
    std::cout << num << "\n";
}