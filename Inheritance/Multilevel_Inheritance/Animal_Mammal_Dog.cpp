// Question: Write a C++ program to demonstrate Multilevel Inheritance
// using Animal, Mammal, and Dog.

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
};

class Mammal : public Animal
{
public:
    void walk()
    {
        cout << name << " is walking." << endl;
    }
};

class Dog : public Mammal
{
public:
    void bark()
    {
        cout << name << " is barking." << endl;
    }
};

int main()
{
    Dog d;

    d.name = "Bruno";

    d.eat();
    d.walk();
    d.bark();

    return 0;
}
