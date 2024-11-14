#include<iostream>
using namespace std;
int main()
{
    int n1,n2,hcf;
    cout<< "Enter two numbers: ";
    cin>>n1>>n2;
int min = (n1<n2)?n1:n2;

// for(int i=1;i<=min;i++){
//     if(n1 % i == 0 && n2 % i == 0){
//         hcf=i;
//     }
// }
for(int i=min;i>0;i--){
    if(n1 % i == 0 && n2 % i == 0){
         hcf=i;
         break;
     }
}
cout<<"GCD: "<<hcf;
 return 0;
}