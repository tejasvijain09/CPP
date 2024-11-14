#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
};
int main()
{
    Student s;
    s.name="Tejasvi";
    // s.rno = 76;
    s.gpa = 8.5;
    cin>>s.rno;
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
    cout<<s.gpa<<endl;

 return 0;
}