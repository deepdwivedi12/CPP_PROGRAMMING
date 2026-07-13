// Question: Write a C++ program to demonstrate logical operators.

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << ((a < b) && (b > 15)) << endl;
    cout << ((a > b) || (b > 15)) << endl;
    cout << !(a > b) << endl;

    return 0;
}
