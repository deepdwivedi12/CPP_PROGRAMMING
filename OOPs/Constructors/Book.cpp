// Question: Write a C++ program to initialize book details using a constructor.

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    double price;

public:
    Book(string t,double p)
    {
        title=t;
        price=p;
    }

    void display()
    {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
    Book b("C++ Programming",799);

    b.display();

    return 0;
}
