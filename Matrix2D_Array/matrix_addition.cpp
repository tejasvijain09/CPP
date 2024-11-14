#include <iostream>
using namespace std;
int main()
{
    int rows1;
    cout << "Enter the number of rows of matrix 1: ";
    cin >> rows1;
    int cols1;
    cout << "Enter the number of cols of matrix 1: ";
    cin >> cols1;

    int rows2;
    cout << "Enter the number of rows of the matrix 2: ";
    cin >> rows2;
    int cols2;
    cout << "Enter the number of cols of the matrix 2: ";
    cin >> cols2;
    if (rows1 != rows2 || cols1 != cols2)
    {
        cout << "Number of rows and columns of both the matrices should be equal.";
    }
    else
    {
        cout << "Enter the elements of the matrix 1: ";
        int matrix1[rows1][cols1];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << "Enter the elements of the matrix 2: ";
        int matrix2[rows2][cols2];
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        int matrix3[rows1][cols1];
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        cout << "The resultant matrix is: "<<endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
}