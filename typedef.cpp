#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

using text2_t = std::string;
using number2_t = int;


int main() {

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    pairlist_t pairlist;
    text_t firstName = "Pedro";
    number_t age = 20;
    text2_t name = "Giovanna";
    number2_t age2 = 21;

    std::cout << firstName << "\n";
    std::cout << age << "\n";
    std::cout << name << "\n";
    std::cout << age2 << "\n";


    return 0;
}