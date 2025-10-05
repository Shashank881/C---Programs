#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two values";
    cin>>a>>b;
    swap(a,b);
    cout<<"Swapped values:"<<a<<b;
}
void swap(int &x,int&y)
{
    int c;
    c=x;
    x=y;
    y=c;
}
