#include <iostream>

int GetThisTotal(int arr[],int size){
    int total=0;
 for(int i=0; i<size; i++){
     total+=arr[i];
 }
   return total;
}

std::string GetThatINput(std::string name[],int size){
for (int i=0;i< size; i++){
    std::cout<<"Enter a name: ";
    std::cin>>name[i];
}
}
std::string GetThatName(std::string name[],int size){
   for (int i=0; i<size; i++){
       std::cout<<i+1<<". "<<name[i]<<"\n";
   }
}
int main(){
int prices[]={10,20,30,40,50};
int size=sizeof(prices)/sizeof(int);
double total= GetThisTotal(prices,size);
std::string name[5];
int size2=sizeof(name)/sizeof(std::string);
GetThatINput(name,size2);
GetThatName(name,size2);
// Notes :
//           when we pass an arrray to a function, it decays into a pointer to the first element of the array.
std::cout<<"Total Bill: ₹"<<total<<"\n";
    return 0;
}