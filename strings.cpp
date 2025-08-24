#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()) {
        std::cout << "Name cannot be empty";
    }
    
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters (Actual Characters: " << name.length() << ")";
    } else if (!name.empty()){
        std::cout << "Welcome " << name << "\n"; 
    }

    name.clear();

    std::cout << "Hello" << name << "\n";

    name.append("pedrocostavgs@gmail.com");

    std::cout << "email: " << name << "\n";

    std::cout << name.at(0) << "\n";

    name.insert(0, "@");

    std::cout << name << "\n";
    
    std::cout << name.find("p");
    
    name.erase(0,3);
    
    std::cout << name << "\n";


    return 0;
}