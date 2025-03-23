#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int i,a[n],x=0;
    cout<<"enter array elements in sorted manner: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        cout<<"Square of "<<a[i]<<" is "<<a[i]*a[i]<<endl;
    }
    return 0;

}

