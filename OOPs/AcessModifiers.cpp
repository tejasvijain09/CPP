#include<iostream>
using namespace std;
class Student{
    public:
    int rno;
    string name;
    Student(){

    }
    Student(int rno, string name,float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
}
void display(){
    cout<<"Roll No.: "<<rno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}
float getMarks(){ // getter
    return marks;
}
void setMarks(float marks){  // setter
    this->marks = marks;
}
private:
    float marks;
};
int main()
{
Student s(76,"Rahgav",92.2);
cout<<s.getMarks()<<endl;
s.setMarks(98.5);
 return 0;
}