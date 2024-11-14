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
for (int i = 0; i < rows; i++) { // i<columns 
for (int j = i; j < rows; j++) { //  j<columns
swap(matrix[i][j], matrix[j][i]);
}
}
for (int col = 0; col < rows; col++) {
int start = 0;
int end = rows - 1;
while (start < end) {
swap(matrix[start][col], matrix[end][col]);
start++;
end--;
}
}
cout<<" 90 degrees Anti-clockwise Rotated matrix is: "<<endl;
for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
 return 0;
}