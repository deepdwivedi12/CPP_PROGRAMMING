// Question: Write a C++ program to create a Product class.

#include <iostream>
using namespace std;

class Product
{
public:
    int id;
    string name;
    double price;

    void display()
    {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p;

    p.id = 1;
    p.name = "Laptop";
    p.price = 65000;

    p.display();

    return 0;
}
