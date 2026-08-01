// Question: Write a C++ program to initialize car details using a constructor.

#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    int year;

public:
    Car(string b,int y)
    {
        brand=b;
        year=y;
    }

    void display()
    {
        cout<<"Brand : "<<brand<<endl;
        cout<<"Year : "<<year<<endl;
    }
};

int main()
{
    Car c("Toyota",2024);

    c.display();

    return 0;
}
