// Question: Write a C++ program to find the maximum of two and three numbers using function overloading.

#include <iostream>
using namespace std;

class Maximum
{
public:

    int max(int a, int b)
    {
        if(a > b)
            return a;
        else
            return b;
    }

    int max(int a, int b, int c)
    {
        if(a > b && a > c)
            return a;
        else if(b > c)
            return b;
        else
            return c;
    }
};

int main()
{
    Maximum m;

    cout << "Maximum of Two Numbers = " << m.max(10,20) << endl;

    cout << "Maximum of Three Numbers = " << m.max(10,20,30);

    return 0;
}
