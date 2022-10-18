#include <iostream>

using namespace std;

class copy_
{
    int a,b,c;
public:
    copy_()
    {
        cout<<"default constreuctor call"<<endl;
    }

    void set(int x,int y,int z)
    {
        cout<<"parameterized constructoir call"<<endl;
    a=x;
    b=y;
    c=z;

     }

    void show()
    {
        cout<<a<<b<<c;
    }

    copy_(copy_& obj)
    {
        cout<<"copy cnsturctor call"<<endl;
        a=obj.a;
        b=obj.b;
        c=obj.c;
    }

};


int main()
{
    copy_ c1;
    c1.set(10,20,30);
    c1.show();

    copy_ c2(c1);
    c2.set(10,20,30);
    c2.show();
    return 0;
}
