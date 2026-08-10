// Question: Write a C++ program to demonstrate Single Inheritance using Animal and Dog.

#include <iostream>
using namespace std;

class Animal
{
public:
    string name;

    void eat()
    {
        cout << name << " is eating." << endl;
    }

    void sleep()
    {
        cout << name << " is sleeping." << endl;
    }
};

class Dog : public Animal
{
public:
    string breed;

    void bark()
    {
        cout << name << " is barking." << endl;
    }

    void displayDog()
    {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main()
{
    Dog d;

    d.name = "Bruno";
    d.breed = "German Shepherd";

    d.eat();
    d.sleep();
    d.bark();
    d.displayDog();

    return 0;
}
