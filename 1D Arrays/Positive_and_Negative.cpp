// Question: Write a C++ program to count positive and negative elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n, positive = 0, negative = 0;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] >= 0)
            positive++;
        else
            negative++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative;

    return 0;
}
