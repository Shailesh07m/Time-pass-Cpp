#include <iostream>
#include <ctime>

int main(){
srand(time(NULL)); // Seed the random number generator
int num= rand() % 5 + 1; // Generate a random number between 1 and 6
switch (num)
{
case 1:
    std::cout << "You Win a Chocalate" << std::endl;
    break;
case 2:
    std::cout << "You Win a T-Shirt" << std::endl;
    break;

case 3:
    std::cout << "You Win a Free Lunch" << std::endl;
    break;
case 4:
    std::cout << "You Win a Case" << std::endl;
    break;
case 5:
    std::cout << "You Win a Consert Ticket" << std::endl;
    break;
default:
    break;
}
    return 0;
}