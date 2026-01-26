#include <iostream>
#include <ctime>

int main(){
srand(time(NULL)); // Seed the random number generator

int num= rand() % 6 + 1; // Generate a random number between 1 and 6
int num2= rand() % 6 + 1; // Generate a random number between 1 and 100
int num3= rand() % 6 + 1; // Generate a random number between 51 and 100
std::cout<< "Random number: " << num << std::endl;
std::cout<< "Random number: " << num2 << std::endl;
std::cout<< "Random number: " << num3 << std::endl;


    return 0;
}