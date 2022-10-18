#include<iostream>
using namespace std;

class deep
{
public:
    int var;

    deep(int x) {
        var = x;
    }

    // Overriding default copy constructor
    // with user defind copy contructor
    deep(const deep &obj) {
        var = obj.var;
    }
};

int main()
{
    // calling the normal constructor
    deep obj1(10);

    // calling user defined copy constructor (Deep Copy)
    deep obj2 = obj1;

    cout << "Before value change - " << endl;

    // printing the values, assigned by constructors
    cout << "obj1.var = " << obj1.var << endl;
    cout << "obj2.var = " << obj2.var << endl;

    obj1.var = 20;

    cout << "\nAfter value change - " << endl;

    // printing the values, assigned by constructors
    cout << "obj1.var = " << obj1.var << endl;
    cout << "obj2.var = " << obj2.var << endl;

    // since we did deep copy using user defined copy constructor
    // change in obj1 is not reflected in obj2

    return  0;
}
