//weak_ptr

//A weak_ptr is created as a copy of shared_ptr. It provides access to an object that is owned by one or more shared_ptr instances but does not participate in reference counting.
//The existence or destruction of weak_ptr has no effect on the shared_ptr or its other copies. It is required in some cases to break circular references between shared_ptr instances.


//Cyclic Dependency (Problems with shared_ptr): Let’s consider a scenario where we have two classes A and B, both have pointers to other classes.
//  So, it’s always like A is pointing to B and B is pointing to A. Hence, use_count will never reach zero and they never get deleted.

//This is the reason we use weak pointers(weak_ptr) as they are not reference counted.
//So, the class in which weak_ptr is declared doesn’t have a stronghold of it i.e. the ownership isn’t shared, but they can have access to these objects.


//So, in case of shared_ptr because of cyclic dependency use_count never reaches zero which is prevented using weak_ptr,
//which removes this problem by declaring A_ptr as weak_ptr, thus class A does not own it, only have access to it and we also need to check the validity of object as it may go out of scope.
//  In general, it is a design issue.

//When to use weak_ptr?
//When you do want to refer to your object from multiple places – for those references for which it’s ok to ignore and deallocate
//  (so they’ll just note the object is gone when you try to dereference).

#include <memory>
#include <iostream>
using namespace std;
int main()
{
weak_ptr<int> wptr_0;

cout << "weak_ptr got expired " << boolalpha<< wptr_0.expired() << endl;
shared_ptr<int> shrd_ptr1(new int(12));

weak_ptr<int> wptr_1(shrd_ptr1);
cout << "*wptr_1 acquired the_lock() == "<< *wptr_1.lock() << endl;

weak_ptr<int> wptr_2(wptr_1);
cout << "*wptr_2 acquired the_lock() == "<< *wptr_2.lock() << endl;

weak_ptr<char> ptr;
cout<<ptr.lock();
shared_ptr<char> ptr2(new char('v'));
cout<<ptr2.get();

return (0);
}
