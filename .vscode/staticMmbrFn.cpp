#include<iostream>
using namespace std;
class Myclass{
    public:
    static int count;
    Myclass(){
        count++;
    }
    static void showCount(){
        cout<<"Count:"<<count;
    }
};
int Myclass::count = 0;
int main()
{
    Myclass obj1;
    Myclass obj2;
    Myclass::showCount(); // calling static member function
 return 0;
}