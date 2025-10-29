#include<iostream>
using namespace std;
template<class T, class Q>
class demo
{
    private:
    T a;
    Q b;
    public:
    void set(T x,Q y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<endl;
    }
};
int main()
{
    demo<int,int>obj1;
    demo<float,float>obj2;
    obj1.set(10,20);
    obj1.show();

    obj2.set(10.22,20.33);
    obj2.show();

}