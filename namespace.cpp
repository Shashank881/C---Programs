#include<iostream>
using namespace std;
namespace zoo
{
    void show()
    {
        cout<<"This is zoo show functon"<<endl;
    }
}
namespace foo
{
    void show()
    {
        cout<<"This is foo function";
    }
}
int main()
{
    zoo::show();
    foo::show();
}