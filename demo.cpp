#include<iostream>
using namespace std;
class Person
{
public: 
int id;
string name;
public:

Person(int i=0, string n="xyz")
{
id = i;
name = n;

}
Person(Person &p)
{
id = p.id;
name = p.name;
//cout<<"Copy Constructor Called";
}



void display()
{ cout<<"id = "<<id<<" name= "<<name<<endl;}
};
int main()
{
Person p1(101, "ABC"), p2, p3(p1), p4(105), p5( 10.3);
cout<<"p1 = ";
p1.display();
p1.id =1000;
cout<<endl;
cout<<" p1 = "<<&p1;
p1.display();

cout<<endl;
cout<<" p2 = "<<&p2;
p2.display();

cout<<endl;
cout<<" p3 = "<<&p3;
p3.display();


return 0;
}