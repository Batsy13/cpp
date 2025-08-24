#include <iostream>
#include <cmath>

int main() {

    double hypotenuse = 0;
    double a, b;

    std::cout << "Define a: " << "\n";
    std::cin >> a;
    
    std::cout << "Define b: " << "\n";
    std::cin >> b;

    hypotenuse = sqrt((pow(a,2) + pow(b,2)));

    std::cout << "Hypotenuse: " << hypotenuse << "\n";

    return 0;
}