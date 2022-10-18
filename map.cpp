//map
// in map we can push aswell as pop pair
//duplicate elemnts not allowed
//internaly it is follow table

#include <iostream>
#include<map>
using namespace std;

class myclass
{
    public:
    map<string,string> s;
    map<int,string> is;
    map<float,char> fc;
    string s1,s2;

    void set()
    {
      s.insert(pair("vivek","shelke"));
       cout<<"Enter name "<<endl;
       getline(cin, s1);
           cout<<"Enter surname"<<endl;
        getline(cin, s2);
       s.insert(pair<string,string>(s1,s2));


       is.insert(pair<int,string>(12,"embedded"));
   
       is[10]="class";

       for(auto i=0;i!=2;i++)
       {
           cin>>fc[i]>>fc[i];
       }

       for(auto i=s.begin();i!=s.end();i++)
           cout << i->first << '\t' << i->second << '\n';

        for(auto i=is.begin();i!=is.end();i++)
    cout << i->first << '\t' << i->second << '\n';

    for(auto itr=fc.begin();itr!=fc.end();itr++)
    cout<<itr->first<<" "<<itr->second;
    }

};

int main()
{
    myclass obj;
    obj.set();
    return 0;
}
