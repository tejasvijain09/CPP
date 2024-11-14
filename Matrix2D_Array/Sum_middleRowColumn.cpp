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
    if(rows%2==0 || cols%2==0){
        cout<<"Number of rows and columns must be odd."<<endl;
    }else{
    cout<<"Enter the elements of the matrix: ";
    int matrix[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    int midRow = rows/2;
    int midCol = cols/2;
    int midRowSum=0;
    int midColSum=0;
    for(int j=0;j<cols;j++){
        midRowSum+=matrix[midRow][j];
    }
    for(int i=0;i<rows;i++){
        midColSum+=matrix[i][midCol];
    }
    cout<<"Sum of middle row of the matrix is: "<<midRowSum<<endl;
    cout<<"Sum of middle column of the matrix is: "<<midColSum<<endl;
    }
 return 0;
}