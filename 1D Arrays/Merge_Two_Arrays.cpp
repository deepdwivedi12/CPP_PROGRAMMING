// Question: Write a C++ program to merge two arrays.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements: ";

    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements: ";

    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Merged Array: ";

    for(int i = 0; i < n1; i++)
        cout << arr1[i] << " ";

    for(int i = 0; i < n2; i++)
        cout << arr2[i] << " ";

    return 0;
}
