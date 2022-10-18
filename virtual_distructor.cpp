//Virtual Destructor Defined in based class and used to get proper destuctor class from the derived class to base class
//Binding on Run Time And Address Holding run Time
#include <iostream>

using namespace std;
class a
{
    char *p;
public:
    a()
    {
        cout<<"Constructor in base class a"<<endl;
        p=new char;
    }
 virtual ~a()
    {
        cout<<"Destructor In base class a"<<endl;
        delete p;
    }

};

class b:public a
{
    char *p1;
public:
        b()
        {
            cout<<"Constructor in derived class b"<<endl;
            p1=new char [10];
        }
        ~b()
        {
            cout<<"Destructor In derived class b"<<endl;
            delete [] p1;
        }


};

class c:public b
{
    char *p2;
public:
    c()
    {
        cout<<"Constructor in derived class c"<<endl;
        p2=new char [5];
    }
    ~c()
    {
        cout<<"Destructor In derived class c"<<endl;
        delete [] p2;
    }

};

int main()
{
 //c obj;//all class execute
 //a obj;//class a
 //b obj;//class and b execute
 c *ptr;
 ptr =new c;//(when we are not deleting creted ptr then-->only Constructor Will Execute)
            //(when we not  deleting this Dynamically created memmory then Memory Leak Will Happened)

 delete ptr;//Destructor deleted created objects
    return 0;
}
