#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30};
    int* ptr = arr;
    ptr++; // Moves to the next element in the array ( ptr now points to arr[1])
    ptr = ptr + 2; // ptr now points to arr[2], which is 30
 return 0;
}