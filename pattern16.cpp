
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the No.of rows: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
