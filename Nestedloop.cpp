#include <iostream>

using namespace std;

int main() {

    // Nested loops example
//    for (int i=1; i<=3; i++) { // Outer loop
//        cout << "Outer loop iteration: " << i << endl;
//        for (int j=1; j<=2; j++) { // Inner loop
//            cout << "  Inner loop iteration: " << j << endl;
//        }
//    cout << endl; // New line for better readability between outer loop iterations
// }

int rows;
int columns;
char symbol;

cout<< "Enter number of rows: ";
cin>> rows;
cout<< "Enter number of columns: ";
cin>> columns;
cout<< "Enter a symbol to use: ";
cin>> symbol;

for (int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++){
        cout<<" "<< symbol;
    }
    cout<< endl;
}
cout<<"----------------------"<< endl;
for (int i=1;i<=rows;i++){
    for(int j=i;j<=columns;j++){
        cout<<" "<< symbol;
    }
    cout<< endl;
}
for (int i=1;i<=rows;i++){
    int oo=1;
    for(int j=i;j<=columns;j++){
        cout<<" "<< oo;
        oo++;
    }
    cout<< endl;
}
for (int i=1;i<=rows;i++){
    int oo=1;
    for(int j=1;j<=i;j++){
        cout<<" "<< oo;
        oo++;
    }
    cout<< endl;
}
 return 0;
}