#include <iostream>
using namespace std;

class Student{

    int id;
   string name;
    double marks;

    public:
    void inputData(){
        cout<<"Enter Student ID: ";
        cin>>id;
        cout<<"Enter Student Name: ";
        cin >> name;
        cout<<"Enter Student Marks: ";
        cin>>marks;
    }

    void displayData(){
        cout<<"Student ID: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Marks: "<<marks<<"%"<<endl;
    }
};

int main(){
Student s1;
s1.inputData();
s1.displayData();
    return 0;
}