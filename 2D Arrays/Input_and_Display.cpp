// Question: Write a C++ program to input and display a matrix.

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];

    cout << "Enter elements:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:" << endl;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
