#include <iostream>

namespace first{
    int x=5;
}
namespace second{
    double x=3.14;
}

int main(){
//Namespaces = provides a solution for preventing name conflicts
// in large projects. Each enitity needs a unique name.
// a namespace allows for identicsl name entitites as long as the 
//namespaces are different.
// :: = scope resolution operator
int x=0;
using namespace std;// by using this we can use standard library without prefixing std::
// dont need to write std:: every time
using namespace first;// now we can use first namespace without prefixing it
std::cout<<"Global x: "<<x<<std::endl;// if not stated print normal x
std::cout<<"First namespace x: "<<first::x<<std::endl;
std::cout<<"Second namespace x:"<< second::x<<std::endl;
    return 0;
}