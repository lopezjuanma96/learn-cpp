#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i <= 10; i++){
        cout << "5x" << i << " = " << n*i << endl;
    }
    
    return 0;
}