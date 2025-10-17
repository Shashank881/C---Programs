#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
    return(x*y);
}
inline double div(double p,double q)
{
    return(p/q);
}
int main()
{
    float a=3.44;
    float b=5.66;

     cout<<mul(a,b)<<endl;
     cout<<div(a,b);

}