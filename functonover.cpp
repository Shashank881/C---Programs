#include<iostream>
using namespace std;
void sum(int x,int y)
{
    cout<<endl<<x+y;
}
void sum(float a,float b)
{
    cout<<endl<<a+b;
}
void sum(double a,double b)
{
    cout<<endl<<a+b;
}
int  main()
{
    sum(10,20);
    sum(3.33f,5.55f);
    sum(34.56f,55.67f);
}