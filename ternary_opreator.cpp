#include <iostream>

int main() { 
    // ternary operator ?=  replacement of if else
    // syntax: condition ? expression1 : expression2;
using namespace std;
//     int grade=75;
//     std::string result = (grade >= 60) ? "Pass" : "Fail";
// cout<<"Your result is: "<<result<<endl;

// int number;
// cout<<"Enter a number: ";
// cin>>number;

// number%2==0? cout<<"Even Number ": cout<<"Odd Number "<<endl;
bool isRaining=true;
// isRaining ? cout<<"Take an umbrella"<<endl : cout<<"No need to take an umbrella"<<endl;
cout<< (isRaining ? "Take an umbrella" : "No need to take an umbrella") << endl;
     return 0;
}