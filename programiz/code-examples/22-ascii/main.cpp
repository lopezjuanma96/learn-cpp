#include <iostream>
using namespace std;

int main() {

    char c;

    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII value of " << c << " is " << int(c); //is this casting? careful with using this as try..except to check a value input

    return 0;
}