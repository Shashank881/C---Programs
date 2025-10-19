#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b,*p;
    public:
    demo()
    {
        a=10;
        b=20;
        p=new int;
        *p=30;
    }
    demo(demo &n)
    {
        a=n.a;
        b=n.b;
        p=new int;
        *p=(*(n.p));
    }
    void show()
    {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }
};
int main()
{
 demo obj1;
 demo obj2(obj1);
 obj1.show();
 obj2.show();
}