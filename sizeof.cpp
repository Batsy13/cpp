#include <iostream>

int main() {

    // sizeof() = determines the size in bytes of a variable, data type, class, objects, etc...

    double gpa = 2.5;

    std::cout << sizeof(gpa) << " bytes\n";

    // Size of a double variable
    std::cout << sizeof(double) << " bytes\n";
    
    // Size of an int variable
    std::cout << sizeof(int) << " bytes\n";

    std::string name = "Batsy";

    std::cout << sizeof(name) << " bytes\n";
    
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // Size of a char
    std::cout << sizeof(grade) << " bytes\n";
    
    // Size of a boolean
    std::cout << sizeof(student) << " bytes\n";
    
    // Size of an array of chars
    std::cout << sizeof(grades) << " bytes\n";
    
    // Elements of an array
    std::cout << sizeof(grades) / sizeof(grades[0]) << " elements\n";

    return 0;
}