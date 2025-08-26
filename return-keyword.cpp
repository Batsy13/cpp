#include <iostream>

double square(double num);
double cube(double num);

int main() {

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 5.0;
    
    std::cout << "Area: " << square(length) << "cm²\n";
    std::cout << "Volume: " << cube(length) << "cm³\n";

    return 0;
}

double square(double num) {
    return num * num;
}

double cube(double num){
    return num * num * num;
}