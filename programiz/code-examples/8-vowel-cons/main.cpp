#include <iostream>
using namespace std;

int main() {

    char c;
    bool isLowerCaseVowel, isUpperCaseVowel;

    cout << "Enter a character:";
    cin >> c;

    isLowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); //CAFERFUL: using '' is not the same as "" => '' for char; "" for string
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c)) { //returns true if char is alphabet
        printf("Error! Non-alphabetic character."); //printf to print with format: https://cplusplus.com/reference/cstdio/printf/
    } else if (isLowerCaseVowel || isUpperCaseVowel){
            cout << c << " is a vowel.";
    } else {
            cout << c << " is a consonant.";
    }

    return 0;
}