// Question: Write a C++ program to demonstrate Single Inheritance using Vehicle and Car.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void start()
    {
        cout << "Vehicle is starting..." << endl;
    }

    void stop()
    {
        cout << "Vehicle is stopping..." << endl;
    }
};

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
    c.stop();

    return 0;
}
