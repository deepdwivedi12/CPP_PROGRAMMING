// Question: Write a C++ program to input and display array elements.

#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Elements: ";

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
