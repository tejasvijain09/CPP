#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;
    Student(){ // default constructor

    }
    Student(int r){
        rno = r;
    }
    Student(string s,int r){ // parametrized constructor
        name = s;
        rno = r;
        // gpa = g;
    }
    Student(string s,int r, float g){ // parametrized constructor
    name = s;
    rno = r;
    gpa = g;
    }
    Student(int r, float g, string s){
        name = s;
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Raghav Garg",76);
    // s1.name="Tejasvi";
    // // s1.rno = 76;
    s1.gpa = 8.5;
    Student s2;
    s2.name = "Rohan Giri";
    s2.rno = 34;
    s2.gpa = 8.7;
    // cout<<s.name<<endl;
    // cout<<s.rno<<endl;
    // cout<<s.gpa<<endl;
    Student s3("Gagan",13,9.2);
    Student s4(45);
    Student s5(34,5.3,"Harish");
    Student s6 = s1; // deep copy
    Student s7(s1); // copy constructor
    s7.name ="Vijay"; // deep copy
    s6.name="Prateek";
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
   
 return 0;
}
// constructor overloading 