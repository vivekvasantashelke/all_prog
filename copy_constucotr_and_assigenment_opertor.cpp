//  copy constructor and assignment operator

//Copy constructor                                                                       	Assignment operator
//It is called when a new object is created from an existing object,
//as a copy of the existing object.	                                                     This operator is called when an already initialized object is assigned
                                                                                          //a new value from another existing object.
//It creates a separate memory block for the new object.                                  	It does not create a separate memory block or new memory space.

//Syntax:
//className(const className &obj) {

// body
                                                                                                            //Syntax:

                                                                                                            //className obj1, obj2;

                                                                                                            //obj2 = obj1;

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
//Explanation: Here, t2 = t1;  calls the assignment operator, same as t2.operator=(t1); and  Test t3 = t1;  calls the copy constructor, same as Test t3(t1);

#include <iostream>
//#include <stdio.h>
using namespace std;

class Test {
    int a,b;
public:
    Test(int x,int y) {
        a=x,b=y;
    }

    Test(const Test& t)
    {
        cout << "Copy constructor called " << endl;
        a=t.a;
        b=t.b;
    }

    Test& operator=(const Test& t)
    {

        cout << "Assignment operator called " << endl;

        a=t.a;
        b=t.b;
        return *this;
    }
};

// Driver code
int main()
{
    Test t1(1,2), t2(2,4);
    t2 = t1;   //Assignment operator called
    Test t3 = t1;//Copy constructor called
    getchar();
    return 0;
}
