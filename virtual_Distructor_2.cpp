//virtual distructor
#include <iostream>

using namespace std;

class a
{
    char *s1;
public:
    a()
    {
        cout<<"Constructor A"<<endl;
        s1=new char[20];
    }
   virtual ~a()
    {
       cout<< "Destrucotr A"<<endl;
       delete [] s1;
    }
};

class b:public a
{
    char *s2;
public:
    b()
    {
        cout<<"Constructor b"<<endl;
        s2=new char[20];
    }
    ~b()
    {
       cout<< "Destrucotr b"<<endl;
       delete [] s2;
    }
};

class c:public b
{
    char *s3;
public:
    c()
    {
        cout<<"Constructor c"<<endl;
        s3=new char[20];
    }
    ~c()
    {
       cout<< "Destrucotr c"<<endl;
       delete [] s3;
    }
};
int main()
{
   // c obj;      //this will execute like
                 /* Constructor A
                 Constructor b
                 Constructor c
                 Destrucotr c
                  Destrucotr b
                    Destrucotr A*/
   a *ptr;
 ptr=new c;   //when u are not deleteing that time only constructor call
               /*Constructor A
                  Constructor b
                    Constructor c*/


 delete ptr;    // when use visturl distorctor
                    /*Constructor A
                     Constructor b
                      Constructor c
                           Destrucotr c*/
    return 0;
}
