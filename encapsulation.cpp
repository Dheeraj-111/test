#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void set_data(int a)
    {
        this->a=a;
    }
    int get()
    {
        return a;
    }
};

int main()
{
    A a;
    a.set_data(5);
    cout<<a.get();
    return 0;
}