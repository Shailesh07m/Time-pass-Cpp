#include <iostream>

int main(){
    std::string student[5];
    
    // for (int i=0; i< sizeof(student)/sizeof(std::string) ; i++){
    //     std::cout<<"Enter a name: ";
    //     std::cin>>student[i];
    // }
    // for (int i=0; i< sizeof(student)/sizeof(std::string) ; i++){
    //     std::cout<<i+1<<". "<<student[i]<<"\n";
    // }
    char grade[5];
    for (int i=0; i< sizeof(grade)/sizeof(char) ; i++){
        std::cout<<"Enter a grade: ";
        std::cin>>grade[i];
    }
    for (int i=0; i< sizeof(grade)/sizeof(char) ; i++){
        std::cout<<i+1<<". "<<grade[i]<<"\n";
    }
    return 0;
}