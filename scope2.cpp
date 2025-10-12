#include<iostream>
using namespace std;
class sample
{
    public:
    int x;   
};
int main()
{
    sample s;
    int sample ::*p=&sample::x;
    s.*p=20;
    cout<<s.*p<<endl;
    cout<<s.x;
}
