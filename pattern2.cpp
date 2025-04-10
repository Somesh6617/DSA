#include<iostream>
using namespace std;
int main()
{
    char n,i,j;
    cout<<"Enter the value: ";
    cin>>n;
    for(i='A';i<=n;i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

