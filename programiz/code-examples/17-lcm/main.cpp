#include <iostream>
using namespace std;

int calccgd(int n1, int n2){

    while (n1 != n2) { 
        if (n1 > n2) n1 -= n2;
        else n2 -= n1;
    }

    return n1;
}

int method1(int n1, int n2){

    int max = (n1 > n2) ? n1 : n2;

    while(max % n1 != 0 || max % n2 != 0) max++;

    return max;
}

int method2(int n1, int n2){ //using gcd (see 16)

    int gcd = calccgd(n1, n2);

    return (n1 * n2) / gcd;
}

int main() {

    int n1, n2;

    cout << "Enter unequal numbers two numbers";
    cin >> n1 >> n2;

    if (n1 == n2) {
        cout << "Numbers should not be equal";
        return 0;
    }

    int met1 = method1(n1, n2);
    int met2 = method2(n1, n2);

    if (met1 == met2){
        cout << "LCM is " << met1;
        return 0;
    } else {
        cout << "methods are returning different results";
        return 0;
    }
}