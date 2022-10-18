//Virtual function
//Is a Member Function which is declared within a base class and is Re-Defined by a Derived class

//virtual function used to avoid function overloading


#include <iostream>

using namespace std;
 class base
 {
    public:
     virtual void print()
     {
         cout<<"print functioin"<<endl;
     }
     void show()
               {
                cout<<"Show Function"<<endl;
               }
 };

 class derived:public base
 {
     void print()
         {
             cout<<"print functioin in deirved class"<<endl;
         }
         void show()
                   {
                    cout<<"Show Function in derived class"<<endl;
                   }
 };

int main()
{
    base *ptr; //we declared virtual function that is virtual pointer
    derived d;
    ptr=&d; //redefined in derived class
    ptr->print();//virtual function
    ptr->show();//non virtual function
    return 0;
}
