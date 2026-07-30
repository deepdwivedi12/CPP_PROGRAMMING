// Question: Write a C++ program to calculate total cost of products.

#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    int quantity;
    double price;

    void input()
    {
        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void bill()
    {
        cout << "\nTotal Cost : " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.bill();

    return 0;
}
