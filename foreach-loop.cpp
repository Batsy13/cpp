#include <iostream>

int main() {

    // foreach loop = loop that eases the traversal over an iterable data set

    std::string students[] = {"Goku", "Vegeta", "Trunks", "Freeza", "Hit"};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++){
        std::cout << students[i] << "\n";
    }

    std::cout << "***************************\n";

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}