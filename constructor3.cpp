#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b;
    public:
    demo()
    {
        a=10;
        b=20;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    demo(demo &z)
    {
        a=z.a;
        b=z.b;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    demo obj1;
    demo obj2(100,200);
    demo obj3(obj2);

    obj1.show();
    obj2.show();
    obj3.show();
}