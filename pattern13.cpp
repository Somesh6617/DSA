#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"  ";//for spaces
        }
         for(j=0;j<n-i;j++)
        {
             cout<<" *";   //for *
        }
        cout<<endl;
    }
    return 0;
}
