#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound()=0;
    virtual void move()=0;
virtual ~Animal(){cout<<"Parent des"<<endl;}
};
class Dog: public Animal{
    public:
    void sound(){
        cout<<"Dog Sound"<<endl;
    }
    void move(){
        cout<<"Runs on ground"<<endl;
    }
    ~Dog(){cout<<"Dog des"<<endl;}
};
class Bird: public Animal{
    public:
    void sound(){
        cout<<"Bird Sound"<<endl;
    }
    void move(){
        cout<<"Flies in the sky";
    }
    ~Bird(){cout<<"Bird des"<<endl;}
};
int main()
{
    Animal* a1 = new Dog();
    Animal* a2 = new Bird();
    a1->sound();
    a1->move();
    a2->sound();
    a2->move();
    delete(a1);
    delete(a2);
 return 0;
}