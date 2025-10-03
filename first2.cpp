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
    void sum()
    {
        c=a+b;
    }
    void show()
    {
        cout<<"Result is\n"<<c;
        
    }
};
int main()
{
    demo obj;
    obj.input();
    obj.sum();
    obj.show();
}