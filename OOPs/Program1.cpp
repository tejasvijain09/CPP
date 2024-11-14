#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    static string course;
    public:
Student(int r, string n){
    roll = r;
    name = n;
}
void display(){
    cout<<"Student Information"<<endl;
    cout<<"Roll: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Course: "<<course<<endl;
}
static void modifyCourse(string mn){
    course = mn;
}
friend void fun(Student& s);
};
string Student::course = "Computer Science";
void fun(Student& s){
    cout<<"Student Information by fun"<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Course: "<<s.course<<endl;
}
int main(){
    Student s1(101, "ABC");
    s1.display();
    Student s2(102,"XYZ");
    s2.display();
    fun(s2);
}