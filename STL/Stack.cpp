#include<iostream>
using namespace std;
template<class T> 
class STACK{
    int size;
    int TOP;
    T arr[];
    public:
    STACK(int s){
        size = s;
        T arr = new T[size];
    }
};
void push(T data){
    if(TOP==size-1){
        cout<<"overflow";
    }else{
        TOP++;
        arr[TOP]=data;
    }
}
void pop(){
    if(TOP==-1){
        cout<<"underflow";
    }else{
        cout<<arr[TOP];
        TOP--;
    }
}
void display(){
    if(TOP==-1){
        cout<<"underflow";
    }else{
        for(int i=TOP;i>=0;i--){
            cout<<arr[i];
        }
    }
}
int main()
{
    STACK <int> S(5);
    S.push(10);
    S.push(20);
    S.display();
    S.pop();
    S.display();
 return 0;
}