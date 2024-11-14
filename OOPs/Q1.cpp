#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(int l, int w){   
        length = l;
        width = w;
    }
    //Rectangle(int l, int w) : length(l), width(w) {}
    friend int calcArea(Rectangle &obj);
};

int calcArea(Rectangle &obj){
    return obj.length * obj.width;
}
int main()
{
    Rectangle R1(5, 10);
   cout<<calcArea(R1)<<endl;
 return 0;
}