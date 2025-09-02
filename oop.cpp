#include <iostream>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping zzzZzzzZzzz\n";
        }
};

int main() {

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex: Phone, Book, Computer)
    //          Created from a class which actes as a "blue-print"

    Human human1;

    human1.name = "Pedro";
    human1.occupation = "Developer";
    human1.age = 20;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.sleep();

    return 0;
}