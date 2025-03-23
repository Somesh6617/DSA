#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int ar[n],i,res=false,c=0;
    cout<<"enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
        cin>>ar[i];
    int target;
    cout<<"Enter target :";
    cin>>target;
    for(i=0;i<n;i++)
    {
        if(ar[i]==target)
        {
           res=true;
            break;
        }
    }
    if(res==false)
        cout<<"In valid target"<<endl;
    else
    {
        for(i=0;i<n;i++)
        {
            if(ar[i]<target)
            {
               c++;
            }
        }
        cout<<"numbers less than "<<target<<" is "<<c;
    }
    return 0;

}
