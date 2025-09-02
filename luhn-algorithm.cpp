#include <iostream>

// 6011000990139424

// 1. Double every second digit from right to left if doubled number is 2 digits, split them

// 6011 0009 9013 9424
// 1 2 2 0  0 1 8 2 1 8 4

// 2. Add all single digits from step 1

// 29

// 3. Add all odd numbered digits from right to left

// 6011 0009 9013 9424
//  0 1  0 9  0 3  4 4
// 21

// 4. Sum results from steps 2 & 3

// 29 + 21 = 50

// 5. If step 4 is divisible by 10, # is valid

// 50 % 10 == 0 ? Valid : Invalid

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    result % 10 == 0 ? std::cout << "Valid!" : std::cout << "Invalid";

    return 0;
}

int getDigit(const int number)
{


    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;
    
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    
    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}