#include <iostream>
using namespace std;

class Complex{

    private:
        float re;
        float im;
    public:
        Complex(): re(0), im(0) {}
        void input(){
            cout << "Enter real part: " << endl;
            cin >> re;
            cout << "Enter imaginary part: " << endl;
            cin >> im;
        }
        Complex operator +(Complex other) {
            Complex temp;
            temp.re = re + other.re;
            temp.im = im + other.im;
            return temp;
        }
        void output(){
            cout << "Complex number is " << re << ((im < 0) ? "" : "+") << im << "i" << endl;
        }
};

int main(){
    Complex a, b, result;
    cout << "Number a:" << endl;
    a.input();
    a.output();
    cout << "Number b:" << endl; 
    b.input();
    b.output();

    result = a + b;
    cout << "Number a+b:" << endl; 
    result.output();
    
}