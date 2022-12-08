#include <iostream>
using namespace std;

int reverse(int original){
    int result = 0;
    while (original > 0){
        result *= 10;
        result += (original % 10);
        original /= 10;
    }
    return result;
}

int main(){

    int number;

    cout << "Enter a number:" << endl;
    cin >> number;
    
    cout << number << " is" << ((number != reverse(number)) ? " not" : "") << " a palindrome."; 

    return 0;
}