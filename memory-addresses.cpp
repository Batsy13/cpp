#include <iostream>

int main() {

    // memory address = a location in memory where data is stored
    //                  a memory adress can accessed with & (adress-of operator)

    std::string name = "Batsy";
    int age = 20;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}