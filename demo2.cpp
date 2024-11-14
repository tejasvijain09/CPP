#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    static string course;
    public:
    Student(string n, int r){
        roll_no = r;
        name = n;
    }
    void display(){
        cout<<"Student Information"<<endl;
        cout<<"Name: "<<name<<" Roll Number: "<<roll_no<<" Course: "<<course<<endl;
}
static void modifycourse(string mn){
    course = mn;
}
};
string Student::course="CSF 102";
int main()
{
   Student s1("ABC",101); 
   s1.display();
   Student s2("XYZ",102);
   s2.display();
   Student::modifycourse("CSF 101");
   s1.display();
   s2.display();
 return 0;
}