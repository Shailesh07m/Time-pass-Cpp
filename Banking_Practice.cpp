#include <iostream>
#include <iomanip>
void displayBalance(double balance){//local variable
    std::cout << "Current Balance: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
double amount=0;
std::cout << "Enter amount to deposit: $";
std::cin >> amount;
if (amount > 0){
    return amount;
}
else{
    std::cout << "Invalid amount!" << std::endl;
    return 0;
}
}
double withdraw(double balance){
double amount=0;
std::cout << "Enter amount to withdraw: $";
std::cin >> amount;
if (amount > 0 && amount <= balance){
    return amount;
}
else{
    std::cout << "Invalid amount or insufficient funds!" << std::endl;
    return 0;
}
}
int main(){
double balance = 1000.0; // local variable
int choice;
bool running = true;
while (running)
{
    std::cout << "Welcome to the Banking System" << std::endl;
std::cout << "1. Display Balance" << std::endl;
std::cout << "2. Deposit" << std::endl;
std::cout << "3. Withdraw" << std::endl;
std::cout <<"4. Exit"<<std::endl;
std::cout << "Enter your choice: ";
std::cin >> choice;

switch(choice){
    case 1:
        displayBalance(balance);
        break;
    case 2:
        balance += deposit();
        displayBalance(balance);
        
        break;
    case 3:
        balance -= withdraw(balance);
        displayBalance(balance);
        break;
    case 4:
        running = false;
        std::cout << "Thank you for using the Banking System!" << std::endl;
        break;
    default:
        std::cout << "Invalid choice!" << std::endl;
}
    /* code */
}

    return 0;
}