#include <iostream>
using namespace std;

class Check1{
    private:
        int i;
    public:
        Check1(): i(0) {} //class constructor
        void operator ++() { ++i; }
        void Display() { cout << "i = " << i << endl; }
};

class Check2{
    private:
        int i;
    public:
        Check2(): i(0) {} //class constructor
        Check2 operator ++() { 
            Check2 temp;
            ++i;
            temp.i = i;
            return temp;
        }
        void Display() { cout << "i = " << i << endl; }
};

class Check3{
    private:
        int i;
    public:
        Check3(): i(0) {} //class constructor
        Check3 operator ++() { 
            Check3 temp;
            ++i;
            temp.i = i;
            return temp;
        }
        Check3 operator ++(int) { //int allows for the use of ++ as postfix (i++) as well as prefix (++i)
            Check3 temp;
            i++; //i++ could still be used on Check1 and Check2 bc is int and int class is already overloaded with ++ as prefix and postfix
            temp.i = i;
            return temp;
        }
        void Display() { cout << "i = " << i << endl; }
};

int main(){

    //Example1:
    cout << "Example1:" << endl;
    Check1 obj;
    obj.Display();
    ++obj; //calls operator
    obj.Display();

    //Example2:
    cout << "Example2:" << endl;
    Check2 obj21, obj22;
    obj21.Display();
    obj22.Display();
    obj22 = ++obj21;
    obj21.Display();
    obj22.Display();

    //Example3:
    cout << "Example3:" << endl;
    Check3 obj31, obj32;
    obj31.Display();
    obj32.Display();
    obj32 = ++obj31;
    obj31.Display();
    obj32.Display();
    obj32 = obj31++;
    obj31.Display();
    obj32.Display();

    return 0;
}