#include <iostream>

int main(){
   
    const double PI=3.14159;
    double radius=5.0;
    double circumference=2*PI*radius;
    std::cout<<"Circumference: "<<circumference<<"cm"<<std::endl;

    const int width=1920;
    const int height=1080;
    std::cout<<"Resolution: "<<width<<"x"<<height<<std::endl;
     // The const keyword in C++ is used to declare variables whose value cannot 
    //be changed after initialization.
    return 0;
}
