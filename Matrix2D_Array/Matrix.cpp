#include<iostream>
using namespace std;
int main(){
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
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}