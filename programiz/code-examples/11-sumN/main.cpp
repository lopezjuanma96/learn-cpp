#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for(int i = 1; i <= n; i++) sum+=i;

    cout << "Sum up to " << n << " is " << sum;
    
    return 0;
}