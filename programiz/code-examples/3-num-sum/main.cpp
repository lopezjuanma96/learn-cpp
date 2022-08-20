#include <iostream>
using namespace std;

int main() {

    int first, second, sum;

    cout << "Enter two integers: ";
    cin >> first >> second; //this notations allows inputing more than one value separated by a spaces, tabs or ends of line (at least that's what i've tried), 
    //if no second value is found it defaults to zero

    sum = first + second;

    cout << first << " + " << second << " = " << sum;
}