#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string n, int r, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(int a){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<a<<endl;
    }
};
int main()
{
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);
    c1.print(10);
    c2.print(20);
 return 0;
}