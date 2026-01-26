#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double a, b, c;
    cout << "Enter side A:" << endl;
    cin >> a ;
    cout << "Enter side B:" << endl;
    cin >> b ;
    c = sqrt(pow(a, 2) + pow(b, 2)); // Hypotenuse formula
    cout << "The length of the hypotenuse is: " << c << endl;
    return 0;
}