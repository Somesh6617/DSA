#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";//for spaces
        }
         for(j=0;j<2*i+1;j++)
        {
             cout<<"*";   //for *
        }
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";//for spaces
        }
        cout<<endl;
    }
    return 0;
}
                //or
/*#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";//for spaces
        }
         for(j=0;j<2*i+1;j++)
        {
             cout<<"*";   //for *
        }
        cout<<endl;
    }
    return 0;
}*/
