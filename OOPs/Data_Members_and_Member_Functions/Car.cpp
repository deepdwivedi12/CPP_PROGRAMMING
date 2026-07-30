// Question: Write a C++ program to display car details using member functions.

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;

    void input()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }

    void display()
    {
        cout << "\nBrand : " << brand << endl;
        cout << "Model : " << model << endl;
    }
};

int main()
{
    Car c;

    c.input();
    c.display();

    return 0;
}
