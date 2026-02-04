#include <iostream>

char getUSerChoice()
{char player;
    do{
    std::cout<<"Rock Paper Scissors Game!"<<std::endl;
    std::cout<<"Enter your choice (R=Rock/P=Paper/S=Scissors): ";
    std::cin>>player;
   

    }while( player!='R' && player!='P' && player!='S' );
     return player;
}
char getComputerChoice()
{
    char computer;
    int randomNum=rand()%3;
    switch(randomNum)
    {
        case 0:
        computer='R';
        break;
        case 1:
        computer='P';
        break;
        case 2:
        computer='S';
        break;
    }
    return computer;
}
void ShowChoice(char choice)

{
    switch (choice)
    {
    case 'R':
        std::cout<<"Rock";
        break;
    
    case 'P':
        std::cout<<"Paper";
        break;
    case 'S':
        std::cout<<"Scissors";
        break;
    default:
        break;
    }
}
void determineWinner(char player, char computer)
{
    switch (player)
    {
        case 'R':
            if(computer=='R')
            {
                std::cout<<"It's a tie!"<<std::endl;
            }
            else if(computer=='P')
            {
                std::cout<<"Computer wins!"<<std::endl;
            }
            else
            {
                std::cout<<"Player wins!"<<std::endl;
            }
            break;
        case 'P':
            if(computer=='R')
            {
                std::cout<<"Player wins!"<<std::endl;
            }
            else if(computer=='P')
            {
                std::cout<<"It's a tie!"<<std::endl;
            }
            else
            {
                std::cout<<"Computer wins!"<<std::endl;
            }
            break;
        case 'S':
            if(computer=='R')
            std::cout<<"Computer Wins!"<<std::endl;
            else if(computer=='P')
            std::cout<<"Player Wins!"<<std::endl;
            else
            std::cout<<"It's a tie!"<<std::endl;
    }
}
int main()
{
char player,computer;
player=getUSerChoice();
std::cout<<"Player choice: ";
ShowChoice(player);
std::cout<<std::endl;
computer=getComputerChoice();
std::cout<<"Computer choice: ";
ShowChoice(computer);
std::cout<<std::endl;
determineWinner(player,computer);




    return 0;
}