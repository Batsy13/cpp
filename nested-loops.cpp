#include <iostream>

int main()
{

    int rows, columns;
    char symbol;

    std::cout << "How many rows? ";
    std::cin >> rows;

    std::cout << "How many columns? ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= columns; j++)
        {
            if(i == 1 || j == 1 || i == rows || j == columns){
                std::cout << "x" << " ";
                continue;
            }
            std::cout << symbol << " ";
        }

        std::cout << "\n";
    }

    return 0;
}