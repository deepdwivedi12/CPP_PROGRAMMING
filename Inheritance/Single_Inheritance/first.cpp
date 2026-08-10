// Question: Write a C++ program to demonstrate Single Inheritance.

#include <iostream>
using namespace std;

// Base Class
class Vehicle
{
public:

    string brand;

    void start()
    {
        cout << "Vehicle is starting..." << endl;
    }
};

// Derived Class
class Car : public Vehicle
{
public:

    string model;

    void displayCar()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

int main()
{
    Car c;

    c.brand = "Toyota";
    c.model = "Fortuner";

    c.start();
    c.displayCar();

    return 0;
}
