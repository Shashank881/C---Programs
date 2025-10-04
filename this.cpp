#include<iostream>
using namespace std;
class demo
{
    private:
    int a,b;
    public:
     void set(int a,int b)
     {
         this->a=a;
        this->b=b;
     }
     void show()
     {
        cout<<a<<" "<<b;
     }
};
int main()
{
    demo obj;
    obj.set(100,200);
    obj.show();

}