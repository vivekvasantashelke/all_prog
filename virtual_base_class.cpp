//virtual base class used to avoid duplication of data
//When the class Parents is made virual base class care taken by the complier to see that only one copy
//of the base class parents is inherited

//virtual base classs

#include <iostream>

using namespace std;

class  a
{
public:int x;
a()
{
    cout<<"constructpr A"<<endl;
    cin>>x;
}
  ~  a()
    {
        cout<<"destuctor A"<<endl;
    }
};

class b:virtual public a{

//class b: public a{
public:
    b()
    {
                cout<<"conestuctor B"<<endl;

    }
    ~b()
    {
                cout<<"destuctor B"<<endl;
    }
};

class c : virtual public  a{

//class c :  public  a{
public:
  c()
  {
              cout<<"constuctor c"<<endl;
               cin>>x;
  }
  ~c()
  {
              cout<<"destuctor c"<<endl;
  }
};

class d : public b,public c
{
public:
    d()
    {
                cout<<"constuctor d"<<endl;

    }
    ~d()
    {
                cout<<"destuctor d"<<endl;
    }
};
int main()
{
    d obj;
    return 0;
}

