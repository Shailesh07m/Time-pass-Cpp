#include <iostream>

int main(){

    using namespace std;
    string name;
//     if (name.empty()) 
//    {
//     cout<<"Enter Your name!"<<endl;// check if string is empty//\check if string 
//     getline(cin,name);
//    }

while (name.empty()) 
   {
    cout<<"Enter Your name!"<<endl;// check if string is empty//\check if string 
    getline(cin,name);
   } 
   cout<<"Hello "<<name<<endl;
    return 0;
}