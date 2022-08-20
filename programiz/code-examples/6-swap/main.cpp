#include <iostream>
using namespace std;

int main() {

    int a = 5, b = 10, temp;

    cout << "swapping with temp" << endl;
    cout << "before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "after: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "swapping without temp" << endl;
    cout << "before: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    a = a + b;
    b = a - b;  //b = ( a + b ) - b = a + b - b = a
    a = a - b;  //a = ( a + b ) - a = a + b - a = b

    cout << "after: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}