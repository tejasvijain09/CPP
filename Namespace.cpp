#include<iostream>
namespace MyNamespace{
    int myVariable=10;
    void myFunction(){
        std::cout<<"Hello from myNamespace! "<<std::endl;
    }
}
// int main(){
//     std::cout<<MyNamespace::myVariable<<std::endl;
//     MyNamespace::myFunction();
//     return 0;
// }
using namespace MyNamespace;
int main(){
    std::cout<< myVariable << std::endl;
    myFunction();
    return 0;
}
