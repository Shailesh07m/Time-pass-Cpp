#include <iostream>
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
std::string fullName(std::string first, std::string last){
    return first + " " + last;
}
int main(){
    // retrun = returns a value back to spot where function was called
    double length=5.0;
    double result = square(length); 
    std :: string last,first;
    std::cout << "Enter your first name: ";
    std::cin >> first;
    std::cout << "Enter your last name: ";
    std::cin >> last;

std::cout << "Full Name: " << fullName(first, last) << std::endl;
    std::cout << "The square of " << length << " is " << square(length) << std::endl;
    std::cout << "The cube of " << length << " is " << cube(length) << std::endl;

    return 0;
}