#include <iostream>

int main() {

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"B-2", "SR-71", "SR-72"}};

    std::cout << cars[0][0] << "\n\n";


    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        // std::cout << cars[i] << "\n"; - Display Memory Adress
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}