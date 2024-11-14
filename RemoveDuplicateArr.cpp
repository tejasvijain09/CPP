#include <iostream>
using namespace std;
#define MAX_SIZE 100 // Macro 

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) // If array is empty or has only one element, no duplicates to remove
        return size;

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;) {
            // If duplicate found, shift subsequent elements to fill the gap
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Reduce the size of the array
            } else {
                j++; // Move to the next element
            }
        }
    }
return size; // Return the new size of the array with duplicates removed
}
int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[MAX_SIZE];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    // Remove duplicates
    int newSize = removeDuplicates(arr, size);

    cout<<"Array with duplicates removed: ";
    for (int i = 0; i < newSize; i++) {
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}