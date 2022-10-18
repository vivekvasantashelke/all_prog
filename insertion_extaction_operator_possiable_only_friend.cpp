//Operator Overloaded only Friend Fuction
//i.e Insertion(isream) And extraction(Ostream)
//its possiable by only Friends Function
//<< >> operator are not using member Function
//it caan be overloaded only using Friends Function

#include <iostream>

using namespace std;

class student
{
    int roll;
    string name;
    friend istream & operator >>(istream & in, student &s);
    friend ostream & operator <<(ostream &out,student s);
};

istream & operator >>(istream & in, student &s)
{
   cout<<"Operator Overloading out"<<endl;
   in>>s.roll>>s.name;
   return in;
}
 ostream & operator <<(ostream &out,student s)
{
 cout<<"Operator Overloading out"<<endl;
 out<<s.roll<<s.name;
 return out;
 }

int main()
{
 student s1,s2;
 cin>>s1>>s2;
 cout<<s1<<s2;
    return 0;
}
