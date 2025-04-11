
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cout<<"Enter the value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        if (i%2==0)
        {
            c=1;
        }
        else
        {
            c=0;
        }
        for(j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c=1-c;
        }
        cout<<endl;
    }
}

