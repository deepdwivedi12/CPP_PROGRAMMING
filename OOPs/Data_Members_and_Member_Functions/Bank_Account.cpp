// Question: Write a C++ program to deposit money into a bank account.

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string name;
    double balance = 0;

    void deposit(double amount)
    {
        balance += amount;
    }

    void display()
    {
        cout << "Account Holder : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.name = "Deep";

    b.deposit(5000);
    b.deposit(2500);

    b.display();

    return 0;
}
