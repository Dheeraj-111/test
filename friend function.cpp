// find maximum of two number using friend function
#include<iostream>
using namespace std;
class Large{
    int a,b,m;
    public:
    void set_data();
    friend void max(Large);
};
void Large :: set_data()
{
    cout<<"Enter first value:- ";
    cin>>a;
    cout<<"Enter second value:- ";
    cin>>b;
}
void max(Large t)
{
    if(t.a>t.b) t.m=t.a;
    else t.m=t.b;
    cout<<"maximum num is:- "<<t.m;
}
int main()
{
    Large l;
    l.set_data();
    max(l);
    return 0;
}
