#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {

        std::cout << "\n*********************\n";
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit \n";
        std::cout << "*********************\n\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Exiting program...";
            break;
        default:
            std::cout << "Enter a valid option\n";
            break;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount";
    }

    return amount;
}

double withdraw(double balance)
{
    double amount;

    std::cout << "Current balance: " << balance << "\n";
    std::cout << "How much money do you want to withdraw? ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Cannot withdraw value bigger than your balance\n";
        return 0;
    } else if (amount < 0) {
        std::cout << "That's not a valid amount\n";
        return 0;
    } else {
        std::cout << "Removing " << amount << "\n";
        return amount;
    }

}