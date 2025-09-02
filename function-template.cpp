#include <iostream>

template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
}
int main() {

    // function template = describes what a function looks like. 
    //                     Can be used to generate as many overloaded functions as needed, 
    //                     each using different data types

    std::cout << max(1,2) << "\n"; // Using int
    std::cout << max(2.2,1.3) << "\n"; // Using double
    std::cout << max('2', '3') << "\n"; // Using string
    std::cout << max(1, 2.89) << "\n"; // Using different data types

    return 0;
}