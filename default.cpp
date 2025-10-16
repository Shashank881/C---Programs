#include<iostream>
using namespace std;
void sum(int x,int y=0,int z=2)
{
    cout<<endl<< x << y << z ;
}
int main()
{
    sum(10);
    sum(10,20);
    sum(10,20,30);
}