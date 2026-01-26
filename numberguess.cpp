#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL)); // Seed the random number generator
 int num,guess,tries=0;

 num= rand() % 100 + 1; // Generate a random number between 1 and 100
 std::cout << "Welcome to the Number Guessing Game!" << std::endl;
do {
    std::cout << "Enter your guess (1-100): ";
    std::cin >> guess;
    tries++;

    if (guess > num) {
        std::cout << "Too high! Try again." << std::endl;
    } else if (guess < num) {
        std::cout << "Too low! Try again." << std::endl;
    } else {
        std::cout << "Congratulations! You guessed the number " << num << " in " << tries << " tries." << std::endl;
        std::cout<<"You took "<< tries <<" attempts to guess the correct number."<<std::endl;
    }

}while (guess!= num);



    return 0;

}