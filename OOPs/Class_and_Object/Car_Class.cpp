// Question: Write a C++ program to create a Car class.

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car c;

    c.brand = "Toyota";
    c.model = "Fortuner";
    c.year = 2024;

    c.display();

    return 0;
}
