#include<iostream>
using namespace std;

class A{
    public:
    virtual void show()
    {
        cout<<"Inside the class A"<<endl;
    }
};
class B: public A{
    public:
    void show() override
    {
        cout<<"Inside the class B"<<endl;
    }
};
int main()
{
    B b;
    A* a=&b;
    a->show();
    return 0;
}