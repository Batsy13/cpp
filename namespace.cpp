#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities as long as the namespaces are different.

    using namespace first;

    std::cout << x << '\n';
    std::cout << second::x << '\n';

    using namespace std;
    // Don't need to use std prefix (std::string | std::cout)
    // You can also just declare std::string or std::cout
    using std::cout;
    using std::string;

    string name = "Giovanna";
    cout << name << "\n";

    return 0;
}