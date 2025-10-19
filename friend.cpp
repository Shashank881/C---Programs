#include<iostream>
using namespace std;
class test;
class demo
{
    private:
    int a,b;
    public:
     friend void sum(demo,test);
     demo()
     {
        a=10;
        b=20;
     }
};
class test
{
    private:
    int x;
    public:
     friend void sum(demo,test);
     test()
     {
        int x=50;
     }
};
void sum(demo n,test m)
{
    cout<<"Sum is "<<n.a+n.b+m.x;
}
int main()
{
    demo obj1;
    test obj2;
    sum(obj1,obj2);
}