#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double x=3,y=4,z;
    z=std::max(x,y); // returns the maximum of x and y
    cout<<"Maximum of "<<x<<" and "<<y<<" is "<<z<<endl;
    z= min(x,y); // returns the minimum of x and y
    cout<<"Minimum of "<<x<<" and "<<y<<" is "<<z<<endl;
    z=pow(2,3); // returns 2 raised to the power 3
    cout<< z<<'\n';
    z=sqrt(16); // returns the square root of 16
    cout<< z<<endl;
    z=abs(-10.5); // returns the absolute value of -10.5 is 10.5
    cout<< z<<endl;
    z=ceil(4.3); // returns the smallest integer value greater than or equal to 4.3
    cout<< z<<endl;
    z=floor(4.7); // returns the largest integer value less than or equal to 4.7
    cout<< z<<endl;
    z=round(4.5); // returns the nearest integer value to 4.5
    cout<< z<<endl;
    //https://cplusplus.com/reference/cmath/ for any library function details
    return 0;
}