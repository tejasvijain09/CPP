#include<iostream>
using namespace std;
int main()
{
double b =70.76;
double * p = &b;
double ** r = &p;

cout<<*r<<endl;
cout<<**r<<endl;
cout<<*&r<<endl;
cout<<**&r<<endl;
cout<<*&p<<endl;
// cout<<*&&p;
 return 0;
}