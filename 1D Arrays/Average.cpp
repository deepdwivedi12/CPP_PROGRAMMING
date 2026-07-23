// Question: Write a C++ program to find the average of array elements.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average = " << (float)sum / n;

    return 0;
}
