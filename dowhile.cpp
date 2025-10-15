#include<iostream>
using namespace std;
int main()
{
    int i=1,n,ch;
    do
    {
        cout<<"Enter the value";
        cin>>n;
        i=1;
        while(i<=10)
        {
            cout<<n<<"x"<<i<<"="<<n*i<<endl;
            i++;
        }
        cout<<"Do you want to continue.Press 1 for start and 0 for end";
        cin>>ch;
    }
    while (ch==1);
}