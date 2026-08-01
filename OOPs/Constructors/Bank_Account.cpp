// Question: Write a C++ program to initialize a bank account using a constructor.

#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    double balance;

public:
    Bank(string n,double b)
    {
        name=n;
        balance=b;
    }

    void display()
    {
        cout<<"Account Holder : "<<name<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
};

int main()
{
    Bank b("Deep",10000);

    b.display();

    return 0;
}
