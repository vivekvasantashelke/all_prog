//Opretaor Overloading using Friend Function
//Friend are Non member Function

#include <iostream>

using namespace std;
class complex
{
    int img,real;
public:
    void get(int x,int y)
    {
        real=x,img=y;
    }
    void set()
    {
        int a,b;
        cin>>a>>b;
        get(a,b);
    }
    void display()
    {
        cout<<real<<" "<<img<<endl;
    }
   friend  complex operator +(complex obj1,complex obj2);
};
    complex operator +(complex obj1,complex obj2)
    {
        complex temp;
        temp.real=obj1.real+obj2.real;
        temp.img=obj1.img+obj2.img;
        return temp;
    }




int main()
{
    complex c1,c2,c3;
    c1.set();
    c1.display();

    c2.set();
   c2.display();

   c3=c1+c2;
   c3.display();

    return 0;
}
