#include <iostream>

struct student {

    std::string name;
    double gpa;
    bool enrolled;

};

int main() {

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, bool, char, etc)
    //          variables in a struct are known as "members" 
    //          members can be accessed with . "Class Member Access Operator"

    student student1;
    student1.name = "Giovanna";
    student1.gpa = 4;
    student1.enrolled = true;

    student student2;
    student2.name = "Pedro";
    student2.gpa = 3.5;
    student2.enrolled = true;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";

    return 0;
}