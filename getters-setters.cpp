#include <iostream>

class Stove
{

private:
    int temperature = 0;

public:
    int getTemperature()
    {
        return temperature;
    }

    void setTemperature(int temperature)
    {
        if (temperature < -100)
        {
            this->temperature = -100;
        }
        else if (temperature >= 100000)
        {
            this->temperature = 100000;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{

    // Abstraction = hiding unnecessary data from outside a class
    // getter - functions that makes a private attribute READABLE
    // setter - funciton that makes a private attrubute WRITEABLE

    Stove stove;

    stove.setTemperature(10000);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}