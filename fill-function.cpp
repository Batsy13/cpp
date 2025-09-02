#include <iostream>

int main() {

    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value) 

    std::string foods[10] = {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};

    for(std::string food: foods){
        std::cout << food << "\n";
    }

    const int SIZE = 100; 
    
    std::string foods2[SIZE];
    fill(foods, foods2 + (SIZE/2), "pizza");
    fill(foods + (SIZE/2), foods2 + SIZE, "hamburguer");
    
    std::cout << "\nfoods2: \n";

    for(std::string food: foods2){
        std::cout << food << "\n";
    }


    return 0;
}