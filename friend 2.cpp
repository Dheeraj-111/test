#include<iostream>
using namespace std;
class A{
    private:
    int a,b,sum;
    friend void sum(A);
    public:
    void set_data();
};
void A::set_data()
{
    cout<<"first:- ";
    cin>>a;
    cout<<"Second:- ";
    cin>>b;
}
void sum(A t)
{
    t.sum=t.a+t.b;
    cout<<"Sum is :- "<<t.sum;
}
int main()
{
    A a;
    a.set_data();
    sum(a);
    return 0;
}