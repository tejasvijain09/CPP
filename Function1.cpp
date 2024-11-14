
  #include <iostream>
using namespace std;
void modifyValue(int num)
{
num = 100;
cout << "Inside fun " << num << endl;
}
int main()
{
int x = 10;
cout << "Before Value: " << x << endl;
modifyValue(x);
cout << "After Value: " << x << endl;
return 0;
}  
 