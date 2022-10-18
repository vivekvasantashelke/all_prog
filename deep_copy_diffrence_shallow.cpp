//deep copy
//Whenever we create our own user-defined copy constructor and we do the copying.

//Whenever this happens the member variables etc for any objects have their own memory locations.

//For example, any change in object1 is not reflected in object2
//User-defined copy constructor do a deep copy.
#include <iostream>

using namespace std;

class deep
{
    int x,*y,z;
public:

   // constructor()
    deep()
        {
        y=new int;
    }
    void set(int a,int b,int c)
    {

        x=a;*y=b;z=c;

    }

    int r;
    void result()
    {

        r=x*(*y)*z;
    }
    void show()
    {
        cout<<r<<endl;
        cout<<x<<*y<<z;

    }

    deep(deep& obj)// parametrized constructor
    {
        x=obj.x;
        y=new int;
        *y=*(obj.y);
        z=obj.z;
    }

    ~deep()
    {
        delete y;
    }

};




int main()
{
    deep obj1,obj2;
    obj1.set(10,20,30);
    obj1.result();
    obj1.show();

obj2=obj1;
obj2.show();

    return 0;
}




//#include<iostream>
//using namespace std;

//class PrepInsta
//{
//public:
//    int var;

//    PrepInsta(int x) {
//        var = x;
//    }

//    // Overriding default copy constructor
//    // with user defind copy contructor
//    PrepInsta(const PrepInsta &obj) {
//        var = obj.var;
//    }
//};

//int main()
//{
//    // calling the normal constructor
//    PrepInsta obj1(10);

//    // calling user defined copy constructor (Deep Copy)
//    PrepInsta obj2 = obj1;

//    cout << "Before value change - " << endl;

//    // printing the values, assigned by constructors
//    cout << "obj1.var = " << obj1.var << endl;
//    cout << "obj2.var = " << obj2.var << endl;

//    obj1.var = 20;

//    cout << "\nAfter value change - " << endl;

//    // printing the values, assigned by constructors
//    cout << "obj1.var = " << obj1.var << endl;
//    cout << "obj2.var = " << obj2.var << endl;

//    // since we did deep copy using user defined copy constructor
//    // change in obj1 is not reflected in obj2

//    return  0;
//}








