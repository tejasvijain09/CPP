#include<iostream>
using namespace std;
int main()
{
    int* ptr = new int; // Allocates memory for onr int
    *ptr = 10;          // Assigns value to allocated memory
    delete ptr; // deallocates the memory
    int * arr = new int[5]; // allocates an array of 5 ints
    delete[] arr;  // correctly deallocates the array

    //Use delete[] to deallocate memory allocated with new[] for arrays.
    //Use delete to deallocate memory allocated with new for single objects.
 return 0;
}