#include <iostream>

void swapByValue(std::string x, std::string y);
void swapByReference(std::string &x, std::string &y);
 
int main()
{

    std::string x = "Kool-Aid";
    std::string y = "Water";
    // std::string temp;

    // temp = x;
    // x = y;
    // y = temp;

    swapByValue(x,y); // Passing by value ( creating copies of our variables )

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    swapByReference(x,y); // Passing by Reference ( change in memory address ) 

    std::cout << "-------------------\n";

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    return 0;
}

void swapByValue(std::string x, std::string y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}
void swapByReference(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}