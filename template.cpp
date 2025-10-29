#include<iostream>
using namespace std;
template<class sample>
void swapValues(sample &x,sample &y)
{
    sample c;
    c=x;
    x=y;
    y=c;
}
int main()
{
    int a=10,b=20;
    float n=12.33,m=44.55;
    swapValues(a,b);
    cout<<"swapped values "<<a<<" and "<<b<<endl;
    
    swapValues(n,m);
    cout<<"swapped values "<<n<<" and "<<b<<endl;
}