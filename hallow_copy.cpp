
//shallow copy

#include <iostream>

using namespace std;
class base{

    int x,y,z;

public:int r;
    void set(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }

   void  result()
   {
     r=(x*y*z);
   }
    void show()
    { cout<<r<<endl;
        cout<<x<<y<<z;
    }
};


int main()
{
   base obj1;
   obj1.set(10,203,0);
   obj1.result();
   obj1.show();

   base obj2=obj1;//copy constructoras well assigenment operator;
   obj2.set(10,203,0);
   obj2.result();
   obj2.show();



   base obj3=obj2;
   obj3.show();

    return 0;
}
