#include <iostream>

void GreetUser(std::string name, int time){
    std::cout << "Hello, " << name << "! Welcome to the Program." << std::endl;
    std::cout << "You have " << time << " seconds to complete the task." << std::endl;
}

int main(){
   
// function is an a block of reusable code
std::string name;
int time=10;
std::cout << "Enter your name: ";
std::cin >> name;
GreetUser(name,100);


    return 0;
}