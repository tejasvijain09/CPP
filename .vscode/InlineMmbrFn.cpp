#include<iostream>
using namespace std;
class Myclass{
    public:
    int x;
    void setX(int val){  // inline member function
        x = val;
    }
    int getX(){ // inline member function
        return x;
    }
};
int main()
{
 return 0;
}