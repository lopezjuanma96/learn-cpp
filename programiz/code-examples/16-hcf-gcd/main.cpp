#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Enter two numbers:\n";
    cin >> n1 >> n2;

    while (n1 != n2) { //this is a really could method to find Common Greatest Denominator
        if (n1 > n2) n1 -= n2;
        else n2 -= n1;
    }

    cout << "GCD for the numbers is " << n1; 
}