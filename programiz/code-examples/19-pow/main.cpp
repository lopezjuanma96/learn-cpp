#include <iostream>
#include <cmath>
using namespace std;

int manually(int base, int exp){
    int result = 1;

    while (exp > 0){
        result *= base;
        exp --;
    }

    return result;
}

int withPow(int base, int exp){
    int result = pow(base, exp);
    return result;
}

int main(){
    int base, exp;

    cout << "Enter base" << endl;
    cin >> base;
    cout << "Enter exponent" << endl;
    cin >> exp;

    cout << "Calculated manually " << manually(base, exp) << endl;
    cout << "Calculated with pow " << withPow(base, exp);
}