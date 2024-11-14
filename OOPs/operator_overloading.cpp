#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex(float r = 0, float i = 0): real(r), imag(i) {}
    Complex operator+(const Complex & other){
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const{
        std::cout << real<< " + " << imag << "i" << std::endl;
    }
};
int main()
{
    Complex c1(3.0,4.5);
    Complex c2(2.5,3.5);
    Complex c3 = c1 + c2;
    std::cout<<"Result of addition: ";
    c3.display();
 return 0;
}