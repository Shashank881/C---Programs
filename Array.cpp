#include<iostream>
using namespace std;
class demo{
    private:
    int arr[10];
    public:
    void input()
    {
        int i;
        cout<<"Enter 10 values";
        for(i=0;i<10;i++)
        cin>>arr[i];
    }
    void sort()
    {
        int i,j,c;
        for(i=0;i<10;i++)
        {
            for(j=0;j<9-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    c=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=c;
                }
            }
        }
    }
    int search(int x)
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(arr[i]==x)
            return (1);
        }
        return (0);
    }
    void show()
    {
        int i;
        cout<<"Your 10 values\n";
        for(i=0;i<10;i++)
        cout<<arr[i]<<endl;
    }
};
int main()
{
    int n,result;
    demo obj;
    obj.input();
    obj.sort();
    obj.show();
    
    cout<<"Enter value to be search";
    cin>>n;
    result=obj.search(n);
    if(result==1)
     cout<<"Value found"<<endl;
     else
     cout<<"Value not found"<<endl;
     
     
    
}