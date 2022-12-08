#include <iostream>
#include <string> // for string and to_string()
using namespace std;

int withRemainder(int original){
    int reversed = 0, remainder;

    while (original != 0){
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original /= 10;
    }

    return reversed;
}

string asString(int original){
    string asString = to_string(original);
    string reversed = "";

    for (int i = 1; i <= asString.length(); i++){
        reversed += asString[asString.length() - i];
    }

    return reversed;
}

int main() {
    
    int original;
    cout << "Enter a number";

    cin >> original;

    cout << "Reversed number with remainder: " << withRemainder(original) << endl;
    cout << "Reversed number as string: " << asString(original);
}