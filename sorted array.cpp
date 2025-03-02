#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int i,a[n],x=0;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    bool isSorted=true;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])  //condition for decending order
        {
            isSorted=false;
            break;
        }
    }
    if(isSorted)
        cout<<"array is in sorted order"<<endl;
    else
        cout<<"array is not in sorted order"<<endl;
    return 0;

}
