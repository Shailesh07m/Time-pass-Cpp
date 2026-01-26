#include <iostream>
#include <string>

int main(){

    using namespace std;
    string name;
    cout<<"Enter your full name: ";
    getline(cin,name);
    if (name.length()>12) cout<<"Your name is long."<<endl;// return length of string
    else cout<<"Welcome  "<<name<<endl;

    if (name.empty()) cout<<"You did not enter a name!"<<endl;// check if string is empty//\check if string i semplty or not
    else cout<<"Hello"<<name<<endl;

    // name.clear();// clear the string
    name.append("@gmail.com");// append/upload /adds string at the end
    cout<<"Your username is: "<<name<<endl;

    cout<< name.at(2)<<endl; // access character at index 2
    name.insert(0,"@");// insert character at index 0


    cout<<name.find('a')<<endl; // find index of character 'a'
    name.erase(0,1);// erase character from index 0 to 1
    cout<<name<<endl;


   return 0;
}