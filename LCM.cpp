#include<iostream>
using namespace std;
int main()
{
    int n1,n2,max;
    cout << "Enter two numbers: ";
    cin>>n1>>n2;
    max=(n1>n2)? n1:n2;
    // int lcm = 0;
    // while(true){
    //     if(max%n1==0 && max%n2==0){
    //         cout<< "LCM of " << n1 << " and " << n2 << " is: " << max << endl;
    //         break;
    //     }
    //     max++;
    // }
    for(int i = max;i>0;i++){
        if(i%n1==0 && i%n2==0){
           int  lcm = i;
           cout<<lcm;
            break;
    }
    }
 return 0;
}