// Question: Write a C++ program to create a Book class.

#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    double price;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;

    b.title = "C++ Programming";
    b.author = "Bjarne Stroustrup";
    b.price = 699;

    b.display();

    return 0;
}
