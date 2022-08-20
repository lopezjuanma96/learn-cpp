#include <iostream>
using namespace std;

int main() {

    int first, second, quot, rem;
    float result;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    quot = first / second;
    rem = first % second; //% operator requires both inputs and result to be integers (casting?)
    result = first / second;

    cout << "Remainder = " << quot << endl; //this is end of line
    cout << "Quotient = " << rem << endl;
    cout << "Result = " << result; //this will also output an integer

    return 0;
}