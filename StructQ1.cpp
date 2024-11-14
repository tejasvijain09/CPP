#include<iostream>
using namespace std;
struct employee{
    int emp_num;
    float emp_sal;
}e1,e2,e3;
int main()
{
cout<<"Enter the information of employee 1 "<<endl;;
cout<<"Enter the Employee Number: ";
cin>>e1.emp_num;
cout<<"Enter the Employee Compensation: ";
cin>>e1.emp_sal;
cout<<"Enter the information of employee 2 "<<endl;;
cout<<"Enter the Employee Number: ";
cin>>e2.emp_num;
cout<<"Enter the Employee Compensation: ";
cin>>e2.emp_sal;
cout<<"Enter the information of employee 3 "<<endl;;
cout<<"Enter the Employee Number: ";
cin>>e3.emp_num;
cout<<"Enter the Employee Compensation: ";
cin>>e3.emp_sal;
cout<<"Employee 1 details "<<endl;
cout<<"Employee 1 number: "<<e1.emp_num<<endl;;
cout<<"Employee 1 compensation: "<<e1.emp_sal<<endl;;
cout<<"Employee 2 details: "<<endl;;
cout<<"Employee 2 number: "<<e2.emp_num<<endl;;
cout<<"Employee 2 compensation: "<<e2.emp_sal<<endl;;
cout<<"Employee 3 details: "<<endl;;
cout<<"Employee 3 number: "<<e3.emp_num<<endl;;
cout<<"Employee 3 compensation: "<<e3.emp_sal<<endl;;
 return 0;
}