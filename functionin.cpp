#include<iostream>
using namespace std;
class demo
{
    private:
    int val1,val2,mul,add,d;
    public:
    void input()
    {
        cout<<"Enter two values";
        cin>>val1>>val2;
        sum();
        m();
        div();
    }
    private:
    void sum()
    {
        add=val1+val2;
        cout<<add<<endl;
    }
    void m()
    {
        mul=val1*val2;
        cout<<mul<<endl;
    }
    void div()
    {
        d=val1/val2;
        cout<<d;
    }
};
int main()
{
    demo obj;
    obj.input();

}
