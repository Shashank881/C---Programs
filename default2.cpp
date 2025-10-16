#include<iostream>
using namespace std;
void sum(int amt,float r=2.2)
{
    cout<<endl<<r*amt/100;
}
int main()
{
    sum(5000);
    sum(1000,6.0f);
}