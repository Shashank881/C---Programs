#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b;
    public:
    demo()
    {
       a=20;
       b=30;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
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

    obj1.show();
    obj2.show();
    
}
