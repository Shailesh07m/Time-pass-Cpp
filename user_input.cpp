#include <iostream>
// cout>> (insertion operator) is used to output data to the standard output device (console).
// cin<< (extraction operator) is used to take input from the standard input device (

int main(){
    std::string name;
    int age;
    std::cout<<"Enter your Full name: "<<std::endl;
    std::getline(std::cin>>std::ws, name); // taking string with spaces
    std::cout<<"Enter Your age :"<<std::endl;
    std::cin>>age;
    std::cout<<"Hello ,"<<name<<std::endl;
    std::cout<<"You are "<<age<<" years old."<<std::endl;
    return 0;
}