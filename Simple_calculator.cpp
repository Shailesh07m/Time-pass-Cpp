#include <iostream>

int main(){
char op;
double num1, num2, result;
using namespace std;
cout<<"********************** CALCULATOR **********************"<<endl;
cout<<"Enter operator (+,-,*,/):";
cin>>op;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;

switch(op){

    case '+':
        result = num1 + num2;
        cout<<"Result: "<<num1<<" + "<<num2<<" = "<<result<<endl;
        break;

    case '-':
        result=num1 - num2;
        cout<<"Result: "<<num1<<" - "<<num2<<" = "<<result<<endl;
        break;  
    case '*':
        result=num1 * num2;
        cout<<"Result: "<<num1<<" * "<<num2<<" = "<<result<<endl;
        break;
    case '/':
        result=num1 / num2;
        cout<<"Result: "<<num1<<" / "<<num2<<" = "<<result<<endl;
        break;
    default:
        cout<<"Error! operator is not correct"<<endl;
        break;
}

cout<<"*****************************************************"<<endl;
    return 0;
}