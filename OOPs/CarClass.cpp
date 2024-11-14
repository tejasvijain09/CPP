#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
    string type;
    Car(int p, string n, string t, int s){
        name = n;
        price = p;
        seats = s;
        type = t;
    }
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void change(Car& c){
c.name="Audi A8";
}
int main()
{
    
    Car c1(1500000,"Honda City","Sedan",5);
    // c1.name= "Honda City";
    // c1.price= 45000;
    // c1.seats= 5;
    // c1.type= "Sedan";
    print(c1);
    change(c1); // pass by value
    print(c1);
    // Car c2;
    // c2.name= "Toyota Corolla";
    // c2.price= 35000;
    // c2.seats= 4;
    // c2.type= "SUV";
    // Car c3;
    // c3.name= "BMW X5";
    // c3.price= 65000;
    // c3.seats= 5;
    // c3.type= "SUV";
    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    // cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
    // print(c2);
    // print(c3);
 return 0;
}