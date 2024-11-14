#include<iostream>
#include<fstream>
using namespace std;
class student{
    int sid;
    string name;
    float m1,m2,m3;
    public:
    student(int sid, string name , float m1 ,float m2 , float m3){
        this->sid = sid;
        this->name= name;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void display(){
        cout<<"Student ID : "<<this->sid<<endl;
        cout<<" Student Name : "<<this->name<<endl;
        cout<< "Student Average Marks : "<<(m1+m2+m3)/3<<endl;
    }
    void writeInfo(const char* filename){
        ofstream outfile("student.dat",ios::binary);
        outfile.write(reinterpret_cast<char*>(this), sizeof(*this));
        outfile.close();
    }
    void readInfo(const char* filename){
        ifstream infile("student.dat", ios::binary);
        infile.read(reinterpret_cast<char*>(this), sizeof(*this));
        infile.close();
    }
};
int main()
{
    student s(5911,"Sidhu Moosewala",65,31,8);
    s.display();
    s.writeInfo("student.dat");
    s.readInfo("student.dat");
 return 0;
}