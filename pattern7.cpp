#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=1;
    cout<<"Enter the value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c+=1;
        }
        cout<<endl;
    }
}


