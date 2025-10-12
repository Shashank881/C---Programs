#include<iostream>
using namespace std;
int a=5;
int main()
{
    int a=10;
    cout<<"Local a="<<a<<endl;
    cout<<"Global a="<<::a<<endl;
}