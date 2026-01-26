#include <iostream>

int main(){
    using namespace std;
    using std::endl;
    //type conversion: changing data type of variable to another data type
    //implicit type conversion: done by compiler automatically

    //implicit
    // double x= (int)3.14;
    // char y=100;
    // cout<<y<<endl;
    // cout<<"Value of x (implicit conversion): "<<x<<endl;
    int correct=8;
    int question =10;
    double score= correct/(double) question *100.0; // 8/10=0.8*100=80.0
    cout<< score<<endl;
    return 0;
}