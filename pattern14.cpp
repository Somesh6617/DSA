#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter no.rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }

        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
