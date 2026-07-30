// Question: Write a C++ program to display book details.

#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    double price;

    void input()
    {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nTitle : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    Book b;

    b.input();
    b.display();

    return 0;
}
