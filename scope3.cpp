#include<iostream>
using namespace std;
class sample
{
    public:
    int x;
    void display()
    {
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    sample s;
    sample *p;
   
    int sample ::*f=&sample::x;
    s.x=30;
    p=&s;
    cout<<p->*f<<endl;
    p->display();
}
