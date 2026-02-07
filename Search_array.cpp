#include <iostream>

int search_that_b(int arr[],int size,int searchNum){
   
    for (int i=0; i<size; i++){
        if(arr[i]==searchNum){
            return i;
        }
    }
    return -1; // Not found
}

int search_that_bit(std::string arr[],int size,std::string searchFood){
    for (int i=0; i<size; i++){
        if(arr[i]==searchFood){
            return i;
        }
    }
    return -1; // Not found
}


int main(){
    int numbers[]={1,2,42,3,49,52};
    int size=sizeof(numbers)/sizeof(int);

    std::string Food[]={"Pizza","Burger","Pasta"};
    int size2=sizeof(Food)/sizeof(std::string);
 std::string myFood;
    std::cout<<"Enter a food to search: ";
    std::getline(std::cin,myFood);

    int searchNum;
    std::cout<<"Enter a number to search: ";
    std::cin>>searchNum;

   
    
    int index2=search_that_bit(Food,size2,myFood);
    if (index2 != -1){
        std::cout<<"Food found at index: "<<index2<<"\n";
    }
    else{
        std::cout<<"Food not found in the array.\n";
    }
    
    int index;
    index=search_that_b(numbers,size,searchNum);
    if (index != -1){
        std::cout<<"Number found at index: "<<index<<"\n";
    }
    else{
        std::cout<<"Number not found in the array.\n";
    }



    return 0;
}