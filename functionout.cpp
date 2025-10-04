#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b,c;
    public:
    void input();
    void sum();
    void show()
    {
        cout<<"Sum of "<<a <<"and"<< b <<"is"<< c;
    }
};
void demo::input()
{
    cout<<"Enter two values";
    cin>>a>>b;
}
void demo::sum()
{
    c=a+b;
}
int main()
{
    demo obj;
    obj.input();
    obj.sum();
    obj.show();
}
