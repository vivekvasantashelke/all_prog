// set
// its store the elemnts in the decending order
//it can avoid duplicate elemnts

#include <iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(100);
    s.insert(400);
    s.insert(400);
    s.insert(1);
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<endl;
    }

    return 0;
}