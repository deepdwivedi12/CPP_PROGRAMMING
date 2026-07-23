// Question: Write a C++ program to find the smallest element in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Smallest = " << smallest;

    return 0;
}
