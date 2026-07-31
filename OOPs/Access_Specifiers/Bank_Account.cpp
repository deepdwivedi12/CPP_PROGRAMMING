// Question: Write a C++ program to perform deposit operation using private data members.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void showBalance()
    {
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.deposit(5000);
    account.deposit(2500);

    account.showBalance();

    return 0;
}
