#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value: ";
    cin>>n;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

