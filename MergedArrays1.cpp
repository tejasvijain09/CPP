#include<iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size and elements for the first array
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[n1];
    for(int i = 0; i < n1; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr1[i];
    }

    // Input size and elements for the second array
    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr2[i];
    }

    // Create a new array to hold the merged array
    int mergedArray[n1 + n2];

    // Copy elements from the first array to the merged array
    for(int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from the second array to the merged array
    for(int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Print the merged array
    cout << "Merged array: ";
    for(int i = 0; i < n1 + n2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    int n=n1+n2;
   for(int j = 0; j < n-1; j++) {
        bool flag = false;  // Early exit condition
        for(int k = 0; k < n-1-j; k++) {
            if(mergedArray[k] > mergedArray[k+1]) {
                int temp = mergedArray[k];
                mergedArray[k] = mergedArray[k+1];
                mergedArray[k+1] = temp;
                flag = true;
            }
        }
        if(!flag) {
            break;  // Array is already sorted
        }
    } 
     cout << "Sorted Array: ";
    for(int m = 0; m < n; m++) {
        cout << mergedArray[m] << " ";
    }

    return 0;
}
