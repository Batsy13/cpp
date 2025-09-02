#include <iostream>

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }


    void seeCar(){
        std::cout << this->make << "\n";
        std::cout << this->model << "\n";
        std::cout << this->year << "\n";
        std::cout << this->color << "\n";
    }
};

int main() {

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Car car1("Ford", "Mustang", 2015, "Black");
    Car car2("Lamborghini", "Aventador", 2024, "Red");
    car1.seeCar();
    car2.seeCar();

    return 0;
}