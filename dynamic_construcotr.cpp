//Dynamic constructor
//This constructor used to allocate memory to the objects at Run-time.
//the memory allocation with the help of new operator


#include <iostream>

using namespace std;

class A
{
    int x,y;
public:
    A()
    {
        cout<<"Defualt Constructor"<<endl;
        x=0,y=0;
    }
    //A(int a,int b):x(a),y(b)
        A(int a,int b)
        {
        cout<<"Parameterized constructor"<<endl;
        x=a,y=b;
        }

        A(A &obj)
        {
            cout<<"Copy Constructor"<<endl;
            x=obj.x;
            y=obj.y;
        }
};


int main()
{
    A *bptr;//defaul constructor
    A obj;  //defaul constructor
   bptr=new A;   //Dynamic object cration
   bptr=new A(10,200); //parameterized constructor
   bptr=new A(obj);//copy constuctor
    return 0;
}
