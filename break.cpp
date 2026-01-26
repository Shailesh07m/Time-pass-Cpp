#include <iostream>
using namespace std;

int main(){

//break = used to terminate loop or switch statement
//continue = skips the current iteration of a loop and continues with the next iteration

for (int i = 1; i <= 20; i++){
    if (i == 13){
        // break; // terminates the loop when i is 13
        continue; // skips the iteration when i is 13
    }
    std::cout << i << endl;
}
    return 0;
}