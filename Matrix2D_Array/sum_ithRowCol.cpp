#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows for the matrix: ";
    cin>>rows;
    int cols;
    cout<<"Enter the number of cols: ";
    cin>>cols;
    cout<<"Enter the elements of the matrix: ";
    int matrix[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    int validRange = min(rows,cols);
    for(int j=0;j<validRange;j++){
        int sumRow = 0;
        int sumCol = 0;
        for(int i=0;i<cols;i++){
             sumRow += matrix[j][i];
        }
        for(int k=0;k<rows;k++){
            sumCol += matrix[k][j];
        }
        if(sumRow == sumCol){
            cout << "Sum of row " << j+1 << " and column " << j+1 << " are equal." << endl;
            return 1;
        }
    }
    cout << "No row and column sums are equal." << endl;
 return 0;
}