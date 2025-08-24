#include <iostream>
#include <cmath>

int main() {

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x,y);

    std::cout << "The bigger number are: " << z << "\n";

    z = std::min(x,y);

    std::cout << "The smallest number are: " << z << "\n";

    z = pow(2, 3);

    std::cout << "pow(2, 3)" << z << "\n";
    
    z = sqrt(y);
    
    std::cout << "sqrt(y): " << z << "\n";
    
    z = abs(-3);

    std::cout << "abs(-3): " << z << "\n";
    
    z = round(2.4);
    
    std::cout << "round(2.4): " << z << "\n";
    
    z = ceil(2.4);
    
    std::cout << "ceil(2.4): " << z << "\n";
    
    z = floor(2.99);
    
    std::cout << "floor(2.99): " << z << "\n";

    return 0;
}