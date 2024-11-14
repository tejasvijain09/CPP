#include<iostream>
using namespace std;
int main()
{
    // int num1,num2;
    // cout<<"Enter number 1 :";
    // cin>>num1;
    // cout<<"Enter number 2 :";
    // cin>>num2;
    // int temp = num1;
    // num1=num2;
    // num2=temp;
    // cout<<"Number 1 :"<<num1<<endl;
    // cout<<"Number 2 :"<<num2;
    int x[]={7,17,8,85,36,22,35,14};
    int size = sizeof(x)/4;
    for(int j=0;j<size-1;j++){
        // cout<<"Pass"<<(j+1)<<"started"<<endl;
        int flag =0;
    for(int i=0;i<size-1;i++){
        if(x[i]>x[i+1]){
            int temp = x[i];
            x[i]=x[i+1];
            x[i+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
    }
 for(int i=0;i<size;i++){
    cout<<x[i]<<" ";
 }

 return 0;
}