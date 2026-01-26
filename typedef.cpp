#include <iostream>
#include <vector>
typedef std::string text_t;
typedef int n_t; // or using text_t= std::string; using n_t=int;
// typedef std::vector<std::pair<std::string, int>> pairlist_t;;
int main() {
    using std::cout;
    using std::endl;
    cout << "Hello, World!" << endl;
    //typedef= reserved keyword used to create a different name 
    //for another data type. It is used to make code more readable
    // new identifier for existing type

    text_t name = "Alice";
    n_t age = 30;
    cout << "Name: " << name << endl;
    cout<< "Age: " << age << endl;
    return 0;
}