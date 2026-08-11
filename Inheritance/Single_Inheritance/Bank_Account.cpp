// Question: Write a C++ program to demonstrate Single Inheritance using BankAccount and SavingsAccount.

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string accountHolder;
    int accountNumber;
    double balance;

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayAccount()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    double interestRate;

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;

        cout << "Interest: " << interest << endl;
    }
};

int main()
{
    SavingsAccount s;

    s.accountHolder = "Deep";
    s.accountNumber = 101;
    s.balance = 10000;
    s.interestRate = 5;

    s.displayAccount();

    s.deposit(2000);

    s.withdraw(1000);

    s.calculateInterest();

    return 0;
}
