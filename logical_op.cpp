#include <iostream>

int main(){
// && = check if both condition are true
// || = check if atleast one condition is true 

// ! = reverse the logical state of its operand
using namespace std;

int temp;
cout << "Enter the temperature: ";
cin >> temp;

// if (temp > 0 && temp <30){
//     cout << "The weather is good today!" << endl;
// }
// else
// cout << "The weather is bad today!" << endl;

// if (temp > 0 || temp >=30){
//     cout << "The weather is good today!" << endl;
// }
// else
// cout << "The weather is bad today!" << endl;

bool is_sun    =true;
if (!is_sun)
cout<< "It's sunny today!" << endl;
else
cout << "It's cloudy today!" << endl;



    return 0;
}