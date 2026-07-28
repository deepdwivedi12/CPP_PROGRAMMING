// Question: Write a C++ program to create a Bank Account class.

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string accountHolder;
    int accountNumber;
    double balance;

    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.accountHolder = "Deep";
    b.accountNumber = 123456;
    b.balance = 50000;

    b.display();

    return 0;
}
