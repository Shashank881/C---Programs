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
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    demo obj1;
    obj1.show();
}