// Question: Write a C++ program to demonstrate Single Inheritance using Product and ElectronicProduct.

#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    int productId;
    double price;

    void displayProduct()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Price: " << price << endl;
    }
};

class ElectronicProduct : public Product
{
public:
    string brand;
    int warranty;

    void displayElectronicProduct()
    {
        cout << "Brand: " << brand << endl;
        cout << "Warranty: " << warranty << " years" << endl;
    }
};

int main()
{
    ElectronicProduct e;

    e.productName = "Laptop";
    e.productId = 101;
    e.price = 65000;

    e.brand = "Apple";
    e.warranty = 2;

    e.displayProduct();
    e.displayElectronicProduct();

    return 0;
}
