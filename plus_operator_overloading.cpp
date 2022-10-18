//plus(+) operator overloding

#include <iostream>

using namespace std;
class complex
{
    int real;
    int imag;
public: void set(int x,int y)
         {
        real=x;
        imag=y;
            }
    int get()
    { int x;
        int y;
        cin>>x;
        cin>>y;
        set(x,y);
    }
    void display()
    {
        cout<<real<<endl;
        cout<<imag<<endl;
    }

    complex operator +(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
    }

};

int main()
{
    complex c1,c2,c3;
    cout<<"enter for c1"<<endl;
    c1.get();
    cout<<"enter for  c2"<<endl;
    c2.get();
    cout<<"c3 result"<<endl;
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
