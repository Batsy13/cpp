#include <iostream>

struct Car
{

    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2015;
    car1.color = "Black";

    car2.model = "Lamborghini";
    car2.year = 2025;
    car2.color = "Red";

    std::cout << &car1 << "\n";
    printCar(car1);

    paintCar(car1, "Red");

    printCar(car1);

    return 0;
}

void printCar(Car &car)
{
    std::cout << &car << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color)
{
    car.color = color;
}