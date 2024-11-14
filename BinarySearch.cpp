// OS calls the main function
#include<iostream>
using namespace std;
int main()
{
    int x[10];
    int i;
    int beg = 0, end = 9, mid,num=56;
    for(i=0;i<10;i++){
        cout<<"Enter a number: ";
        cin>>x[i]; 
    }
    while(beg<=end){
        mid = (beg+end)/2;
        if(x[mid]==num){
            cout<<"Number found at "<<(mid+1)<< "Position";
            break;
        }else if(x[mid]>num){
            end=mid-1;
        }else{
            beg=mid+1;
        }
    }
    if(beg>end){
        cout<<"Number not found";
    }
 return 0;
}
// let us suppose there are a number of apples placed here. In a group of 7 able to pick up all. in group of 6,5,4,3,2,1 one apple is left behind. Minimum no. of apples placed here.
//create an account on leetcode.
// num_of_digits = (int)(log10(num)+1);
// program to insert num in end of array
// array insertion at 0 index
//  insert at middle | insert at kth pos (k is given)
#include <iostream>
using namespace std;

// Function for binary search using recursion
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; // Base case: element not found
    }
    
    int mid = (low + high) / 2; // Find the middle element

    if (arr[mid] == key) {
        return mid; // Element found at mid
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key); // Search in the left half
    }
    else {
        return binarySearch(arr, mid + 1, high, key); // Search in the right half
    }
}

int main() {
    int n, key;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input the elements of the array (assume they are sorted)
    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
///////

#include <iostream>
using namespace std;

void binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        cout << "Element not found in the array." << endl;
        return;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        cout << "Element found at index " << mid << endl;
    }
    else if (arr[mid] > key) {
        binarySearch(arr, low, mid - 1, key);  // Tail recursion, no need to return
    }
    else {
        binarySearch(arr, mid + 1, high, key); // Tail recursion, no need to return
    }
}

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Call the binary search function
    binarySearch(arr, 0, n - 1, key);

    return 0;
}

//////
#include <iostream>
using namespace std;

// Helper function for binary search
int binarySearchHelper(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; // Element not found
    }
    
    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid; // Element found
    }
    else if (arr[mid] > key) {
        return binarySearchHelper(arr, low, mid - 1, key); // Left half
    }
    else {
        return binarySearchHelper(arr, mid + 1, high, key); // Right half
    }
}

// Main binary search function
int binarySearch(int arr[], int n, int key) {
    return binarySearchHelper(arr, 0, n - 1, key); // Call helper function
}

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}








