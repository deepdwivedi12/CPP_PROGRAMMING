// Question: Write a C++ program to perform linear search in an array.

#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element Found at Index " << i;
            return 0;
        }
    }

    cout << "Element Not Found";

    return 0;
}
