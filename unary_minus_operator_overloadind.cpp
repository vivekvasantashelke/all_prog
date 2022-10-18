//unary minus(-) operator
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

   A operator -()
   {
       A temp;
       temp.x=-x;
       temp.y=-y;
       return temp;
   }

};

int main()
{
    A obj1(11,23),obj2;
    obj1.display();
    obj2=-obj1;   //obj2=obj1.operator-();
    obj2.display();
    return 0;
}
