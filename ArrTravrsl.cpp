#include<iostream>
using namespace std;
int main()
{
    int numbers[10];
    cout << "Enter 10 integers: ";
    for(int i=0;i<10;i++){
        cin>>numbers[i];
    }
    cout << "The integers you entered are:" << endl;
    for(int i=0;i<10;i++){
        cout << numbers[i] << endl;
    }
 return 0;
}