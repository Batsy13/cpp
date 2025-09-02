#include <iostream>

void iterativeWalk(int steps);
void recursiveWalk(int steps);
int factorial(int num);

int main() {

    // recursion = a programming technique where a function
    //             invokes itself from within 
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner 
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower


    iterativeWalk(100);
    recursiveWalk(100);
    std::cout << "Factorial(4): " << factorial(4) << "\n"; 

    return 0;
}

void iterativeWalk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}

void recursiveWalk(int steps){
    if(steps > 0) {
        std::cout << "You take a step!\n";
        recursiveWalk(steps-1);
    }
}

int factorial(int num){

    if(num > 1){
        return num * factorial(num - 1);
    } else {
        return 1;
    }

}