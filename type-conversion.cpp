#include <iostream>

int main() {

    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede a value with a new data type

    double x = (int) 3.14;

    std::cout << x << "\n";

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}