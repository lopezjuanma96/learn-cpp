#include <iostream>
using namespace std;

int main() {

    int n, i = 0, current1 = 0, current2 = 1, next = 1;

    cout << "Enter N: ";
    cin >> n;

    cout << "Fibonacci for " << n << " terms" << endl;
    cout << current1 << ", " << current2 << ", ";
    
    while (i < n-3) { 
        //n-3 because 2 are done with currents and the last one 
        //is printed outside the while loop to skip the comma

        cout << next << ", ";
        current1 = current2;
        current2 = next;
        next = current1 + current2;
        i++;

    }
    cout << next;
    return 0;
}