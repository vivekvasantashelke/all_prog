//operator overloading post as well as pre increment

#include <iostream>

using namespace std;

class A
{
     int x,y;
    public:
        A()
        {
            cout<<"Constructor"<<endl;
        }
        A(int a,int b):x(a),y(b)
        {
            cout<<"Parameterized Constructor"<<endl;
        }
       void display()
       {
           cout<<x<<" "<<y<<endl;
       }
       A operator ++(int)  //post increments
       {
           A temp;
           temp.x=x++;
           temp.y=y++;
           return temp;
       }
       A operator ++()  //pre Increments
       {
           A temp;
           temp.x=++x;
           temp.y=++y;
           return temp;
       }

       A operator --(int)  //post Decrements
       {
           A temp;
           temp.x=x--;
           temp.y=y--;
           return temp;
       }
       A operator --()  //pre Increments
       {
           A temp;
           temp.x=--x;
           temp.y=--y;
           return temp;
       }
};

int main()
{
    A obj1(100,200),obj2(10,20);
        ++obj1;
        obj1.display();
        --obj2;
        obj2.display();

    return 0;
}
