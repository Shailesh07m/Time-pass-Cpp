#include <iostream>

int main(){
    double temp;
    char unit;

using namespace std;
cout<< "**************** Temperature Conversion ****************\n";
cout << " F = faraniheit \n C = celsius \n ";
cout << "What unit would you like to convert to (F or C)? ";
cin >> unit;
 
if (unit =='F'|| unit=='f'){
cout <<" Enter temperature in Celcius :";
cin >> temp;
temp=(1.8 * temp) +32;
cout << "Temperature in faranhite is :"<< temp << "\n";

}
else if (unit =='C'|| unit=='c'){
cout <<" Enter temperature in Faranhite :";
cin >> temp;
temp=(temp-32)/1.8;
cout << "Temperature in Celcius is :"<< temp << "\n";

}
else {
    cout << " Invalid Unit ";
}


cout << "******************************************************************";
    return 0;
}