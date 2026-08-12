// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using Vehicle, Car, and ElectricCar.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void start()
    {
        cout << "Vehicle is starting." << endl;
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

class ElectricCar : public Car
{
public:
    int batteryCapacity;

    void displayBattery()
    {
        cout << "Battery Capacity: "
             << batteryCapacity << " kWh" << endl;
    }
};

int main()
{
    ElectricCar e;

    e.brand = "Tesla";
    e.model = "Model 3";
    e.batteryCapacity = 75;

    e.start();
    e.displayCar();
    e.displayBattery();

    return 0;
}
