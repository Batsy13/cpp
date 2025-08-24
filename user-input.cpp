#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    std::string name;

    std::cout << "What's your name? ";
    std::cin >> name;

    int age;

    std::cout << "What's your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old\n";
    
    std::string fullName;
    
    // To read a string with spaces (std::getline)
    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, fullName);
    
    std::cout << "Hello " << fullName << "\n";

    return 0;
}