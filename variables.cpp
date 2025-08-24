#include <iostream>

int main(){

    int x = 5;

    // Integer ( Whole Number )
    int age = 20;
    int year = 2025;
    int days = 7;

    // Double ( Number including decimal )
    double price = 10.99;
    double gpa = 9.55;
    double temperature = 24.5;

    // Char ( Single Character )
    char grade = 'A';
    char initial = 'P';

    // Boolean (true or false)

    bool isTrue = true;
    bool isFalse = false;

    // string ( objects that represents a sequence of text )

    std::string name = "Pedro";
    std::string day = "Sunday";
    std::string food = "Pizza";
    std::string adress = "Qr 117";

    std::cout << "Hello World" << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    // Constant value
    const double pi = 3.14159;
    double radius = 14.65;
    double circumference = 2 * pi * radius;

    std::cout << circumference << std::endl;

    return 0;
}