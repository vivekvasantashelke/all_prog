//deque
// we can push in front as well as back end
//also we can pop element in frot as well as back;

#include <iostream>
#include<queue>
using namespace std;


int main()
{
    deque <char> c;
    c.push_back('a');
    c.push_back('b');

    for(auto i=0;i<4;i++)
    {
        char ch;
        cin>>ch;
        c.push_front(ch);
    }
    c.pop_front();

    for(auto i=0;i<c.size();i++)
    {
        cout<<c[i];
    }
    return 0;
}
