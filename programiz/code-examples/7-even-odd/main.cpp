#include <iostream>
using namespace std;

int main(){
    
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "With if/else.." << endl;
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    cout << "with ternaries" << endl;
    cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << "."; 
    //it's also possible to use 
    // num % 2 == 0 ? cout << num << " is even." : cout << num << " is odd."
    return 0;
}