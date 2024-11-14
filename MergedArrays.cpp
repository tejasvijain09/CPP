#include<iostream>
using namespace std;

int main() {
    int n1, n2;

    // Input size and elements for the first sorted array
    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of the first sorted array in ascending order: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements for the second sorted array
    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of the second sorted array in ascending order: ";
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Create a new array to hold the merged sorted array
    int mergedArray[n1 + n2];
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1, add them to mergedArray
    while(i < n1) {
        mergedArray[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, add them to mergedArray
    while(j < n2) {
        mergedArray[k++] = arr2[j++];
    }

    // Print the merged sorted array
    cout << "Merged sorted array: ";
    for(int l = 0; l < n1 + n2; l++) {
        cout << mergedArray[l] << " ";
    }
    cout << endl;

    return 0;
}
