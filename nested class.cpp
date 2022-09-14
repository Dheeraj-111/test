#include<iostream>
using namespace std;
class abstraction{
    private:
    
    int a,b;
    public:
    class nested{
    abstraction *e;
    public:
    void set(int x, int y)
    {
        e->a=x;
        e->b=y;
    }
    void show()
    {
        cout<<e->a<<" "<<e->b<<endl;
    }
    };
};
int main()
{
    abstraction::nested obj;
    obj.set(10,20);
    obj.show();
    return 0;
}