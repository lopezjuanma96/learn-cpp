#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int n, inp, count = 0;
    int min = 1, max = 100;
    srand(time(NULL)); //i believe this sets the seed for randoms
    n = min + rand()%(max-min);

    cout << "I'm thinking of a number between " << min << " and " << max << ", try to guess it!: ";
    cin >> inp;
    count++;
    
    while (inp != n) {
        cout << "Your number is " << (inp > n ? "greater" : "lower") << " than mine, try again!: ";
        cin >> inp;
        count++;
    }

    cout << "Congratulations! " << n << " is the number I was thinking of! You tried " << count << " times..";
    return 0;
}