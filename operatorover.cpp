#include<iostream>
using namespace std;
class demo 
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter two values";
        cin>>a>>b;
    }
    demo operator +(demo z)
    {
        demo n;
        n.a=a+z.a;
        n.b=b+z.b;
        return n;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    demo obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj1+obj2;
    cout<<"Sum is";
    obj3.show();

}