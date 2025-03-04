#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int arr[n],sum=0;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int total=(n*(n+1))/2;
    int missing=total-sum;
    cout<<"The missing number is :"<<missing<<endl;
}
