#include <iostream>

int main() {

    // pointers = variable that stores a memory addres of another variable
    //            sometimes it's easier to work with an address

    // & adress-of operator
    // * dereference operator

    std::string name = "Batsy";
    std::string *pName = &name;
    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    std::string *pFreePizzas = freePizzas;

    std::cout << pName << '\n'; // Memory Address of name
    std::cout << *pName << '\n'; // Accessing the value of variable name
    std::cout << pFreePizzas << '\n'; // Memory Addres of FreePizzas
    std::cout << *pFreePizzas << '\n'; // Value of FreePizzas[0]


    return 0;
}