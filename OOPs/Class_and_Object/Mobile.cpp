// Question: Write a C++ program to create a Mobile class.

#include <iostream>
using namespace std;

class Mobile
{
public:
    string brand;
    string model;
    int storage;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
};

int main()
{
    Mobile m;

    m.brand = "Samsung";
    m.model = "Galaxy S25";
    m.storage = 256;

    m.display();

    return 0;
}
