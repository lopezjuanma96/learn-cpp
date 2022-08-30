#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int original[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //int original[3][3] = {1,2,3,4,5,6,7,8,9}; //this is the same, c++ uses the sizes to fill by rows

    cout << "Original:\n";

    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
         cout << " " << original[i][j];
      }
      cout << endl;
   }

    cout << "Transp:\n";

    for (int i = 0; i < 3; ++i) {
      for (int j = 0; j < 3; ++j) {
         cout << " " << original[j][i];
      }
      cout << endl;
   }

    cout << "\nPress any key..";
    _getch();
    return 0;   
}