#include <iostream>
using namespace std; //This will allow us to write cout, cin, endl, etc. instead of std::cout, std::cin, std::endl respectively.
//However, using the std namespace is considered a bad practice and we highly recommend you drop this practice once you've mastered the basics of C++.

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number; //control assign value to memory with << or >>
    return 0;
}