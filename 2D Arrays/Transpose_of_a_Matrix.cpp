// Question: Write a C++ program to find the transpose of a matrix.

#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int arr[100][100];

    cout << "Enter matrix:" << endl;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << "Transpose Matrix:" << endl;

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
            cout << arr[j][i] << " ";

        cout << endl;
    }

    return 0;
}
