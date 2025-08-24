#include <iostream>

int main()
{

    // arithmetics operators = return the result of a specific arithmetic operation ( + - * / )

    int students = 20;
    students = students + 1;
    students += 1;
    students++;

    std::cout << students << "\n";

    students -= 1;
    students--;

    std::cout << students << "\n";

    students *= 2;

    std::cout << students << "\n";

    students /= 2;

    std::cout << students << "\n";

    int remainder = students % 2;

    std::cout << remainder << "\n";

    return 0;
}