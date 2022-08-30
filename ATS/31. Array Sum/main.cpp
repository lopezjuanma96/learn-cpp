#include <iostream>
#include <conio.h> //this is for getch command
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5}; //since it's defined on construction, the size could be avoided here, using int arr[]
    int suma = 0;

    for (int i=0; i<5; i++){
        suma += arr[i];
    }

    cout << "the sum of numbers in the array is " << suma << "\n Press any key..";
    getch(); //reads a letter from the keyboard but does not assign it to anything, it's used for the "press any key" command
    return 0;
}