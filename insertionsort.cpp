#include<iostream>
using namespace std;
int main()
{
    int n,key;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],i,j,s;
    cout<<"Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=a[i];
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
