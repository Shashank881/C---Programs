#include<iostream>
using namespace std;
int fun();
int main()
{
    int i,a;
    for(i=0;i<3;i++)
    {
        a=fun();
        cout<<a;
    }
}
int fun()
{
   static int p=1;
    p++;
    return(p);
}
