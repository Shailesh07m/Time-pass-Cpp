#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    int age;

    cout<< "Enter your age: "<<endl;
    cin>> age;
    if(age==0 )
    cout<<"You are a newborn";
    else if (age<=12)
    cout<<"You are a child";
    else if (age > 12 && age<=19)
    cout<<"You are a teenager";
    else if (age>19 && age<=59)
    cout<<"You are an adult";
    else if (age>=60 && age<=120 ) 
    cout<<"You are a senior citizen";
    else
    cout<<"The Fuck are you?";
    return 0;

}