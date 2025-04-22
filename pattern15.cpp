#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the no.of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i+1;j++)
        {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
    return 0;
}
