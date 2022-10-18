//move_constructor  copy com=nstructor
//Copy Constructors                                                                       	Move Constructors
//Copy constructors takes lvalue reference as an argument.                                       	Move constructors takes rvalue reference as argument.
//Copy constructors create a new object from passed object by
//copying each and every item into a new memory location.                                          	Move constructors create a new object by using as much memory from passed object.



//Move constructor moves the resources in the heap,
//i.e., unlike copy constructors which copy the data of the existing object
//and assigning it to the new object move constructor just makes the pointer of the declared object to point to the data of temporary object
//and nulls out the pointer of the temporary objects. Thus, move constructor prevents unnecessarily copying data in the memory.


#include <iostream>

using namespace std;

class myclass
{
    int *data;
public:
   // myclass()
   // {

   // }
    myclass(int a)
    {
         data=new int;
        cout<<"Parametrized constr"<<endl;
        *data=a;
    }

    myclass(const myclass& obj)
//: myclass{ *obj.data }
    {
      data=new int;
        *data=*(obj.data);
       // data=(obj.data);
       cout<<"copy constructor "<<*data<<endl;
   }
    myclass(myclass &&obj)
    {
        cout<<"move constr"<<endl;
        data=obj.data;
        obj.data=nullptr;
//data=0;

    }
~myclass()
    {
        cout<<"Destructor call"<<endl;
        //delete data;
    }

};

int main()
{
   myclass obj1(100);
 myclass obj2=obj1;
  myclass obj3=move(obj1);
    return 0;
}
