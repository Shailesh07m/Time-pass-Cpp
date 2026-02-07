#include <iostream>

int main(){

    //sizeof = determine the size in bytes of a:
    //         variable,data type, or an object,etc
    std::string name="Bro Code";
    std::cout<<"Size of string: "<<sizeof(name)<<"bytes\n";
    char grade='A';
    std::cout<<"Size of char: "<<sizeof(grade)<<"bytes\n";
    int age=21;
    std::cout<<"Size of int: "<<sizeof(age)<<"bytes\n";
    char grades[]={'A','B','C','D','F'};
    std::cout<<"Size of char array: "<<sizeof(grades)<<"bytes\n";
    std::cout<<"TOtal elements in char array: "<<sizeof(grades)/sizeof(char)<<"\n"; 

    double dNum=9.0;
    std::cout<<"Size of double: "<<sizeof(dNum)<<"bytes\n";
    std::string student[]={"Bro","Code"};
    std::cout<<"Size of string array: "<<sizeof(student)/sizeof(student[0])<<"bytes\n";
    return 0;
}