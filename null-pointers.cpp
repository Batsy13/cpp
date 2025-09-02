#include <iostream>

int main() {

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keywork represents a null pointer literal
    // nullptrs are helpful when determining if and adress was successfully assign to a pointer

    // When using pointer, be careful that your code isn't dereferencing nullptr or pointing to free memory 
    // this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
        std::cout << *pointer;
    } else {
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}