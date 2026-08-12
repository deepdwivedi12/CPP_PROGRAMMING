// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using Account, BankAccount, and SavingsAccount.

#include <iostream>
using namespace std;

class Account
{
public:
    string accountHolder;

    void displayHolder()
    {
        cout << "Account Holder: " << accountHolder << endl;
    }
};

class BankAccount : public Account
{
public:
    int accountNumber;

    void displayAccountNumber()
    {
        cout << "Account Number: " << accountNumber << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    double interestRate;

    void displayInterest()
    {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    SavingsAccount s;

    s.accountHolder = "Deep";
    s.accountNumber = 101;
    s.interestRate = 5.5;

    s.displayHolder();
    s.displayAccountNumber();
    s.displayInterest();

    return 0;
}
