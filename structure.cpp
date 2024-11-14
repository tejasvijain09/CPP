#include<iostream>
using namespace std;
struct time{
    int hrs;
    int mins;
    int secs;
};
int main()
{
  struct time t1;
t1.hrs=12;
t1.mins=56;
t1.secs=34;
cout<<t1.hrs<<t1.mins<<t1.secs;
 return 0;
}
