
//list
//Lists are sequence containers that allow non-contiguous memory allocation.
//As compared to vector, the list has slow traversal, but once a position has been found,
//insertion and deletion are quick. Normally, when we say a List, we talk about a doubly linked list.
//For implementing a singly linked list, we use a forward list.



//two list merge

#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> v1,v3={123,1234,12345,1233456,12345678};
list<int> v2;
v1.push_front(10);
v1.push_front(15);
v1.push_front(16);
v1.push_front(13);
v1.push_front(10);
  v2.push_back(30);
     v2.push_back(70);
     v2.push_back(50);
     v2.push_back(37);
     v2.push_back(31);
    v2.push_front(111);

   // sort(v1.begin(),v1.end());
   // sort(v2.begin(),v2.end());

  //  merge(v1.begin(),v2.begin(),v2.end(),v1.end(),v3.begin());
v2.merge(v1);
v3.merge(v2);
    list<int>::iterator i;
    for(i=v3.begin();i!=v3.end();i++)
        cout<<*i<< " ";
        //return 0;
}