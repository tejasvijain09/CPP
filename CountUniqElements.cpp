#include <iostream>
using namespace std;
int countUniqueElements(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int uniqueCount = countUniqueElements(arr, n);
    cout<<"Number of unique elements: "<<uniqueCount<<endl;;

    return 0;
}
