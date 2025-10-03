#include<iostream>
using namespace std;
class demo
{
    private: 
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter two values";
        cin>>a>>b;
    }
    void set()
     {
        a=10;
        b=20;
     }
    void setdata(int x,int y)
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
    demo obj,obj2,obj3;
    obj.input();
    obj.show();

    obj2.set();
    obj2.show();

    int a,b;
    cout<<"Enter two values";
    cin>>a>>b;
    obj3.setdata(a,b);
    obj3.show();
}