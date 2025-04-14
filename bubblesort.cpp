#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],i,j,s;
    cout<<"Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
        {
            s=a[j];
            a[j]=a[j+1];
            a[j+1]=s;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
