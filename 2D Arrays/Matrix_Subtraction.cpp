// Question: Write a C++ program to subtract two matrices.

#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[100][100], b[100][100], sub[100][100];

    cout << "Enter first matrix:" << endl;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:" << endl;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction Matrix:" << endl;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << sub[i][j] << " ";

        cout << endl;
    }

    return 0;
}
