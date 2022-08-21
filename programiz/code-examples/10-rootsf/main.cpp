#include <iostream>
using namespace std;

int main() {

    float a, b, c, disc, realP, imP;

    cout << "Enter coefficients of the quadratic function:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    disc = b*b - 4*a*c;

    realP = -b/(2*a);
    imP = sqrt(abs(disc))/(2*a);

    if (disc == 0) cout << "Both roots are: " << realP;
    else if (disc < 0) cout << "Roots are: " << realP << " + " << imP << "i and " << realP << " - " << imP << "i";
    else if (disc > 0) cout << "Roots are: " << realP + imP << " and " << realP - imP;
    return 0;
}