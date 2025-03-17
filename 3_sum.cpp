#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size :";
    cin>>n;
    int ar[n],i;
    cout<<"enter "<<n<<" elements :";
    for(i=0;i<n;i++)
        cin>>ar[i];
    int tar,j,k,res=false;
    cout<<"enter the target: ";
    cin>>tar;
    for(i=0;i<n;i++)
    {
        if(tar==ar[i])
        {
            res=true;
            cout<<"At index :"<<i;
            break;
        }
        else
        {
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n;k++)
            {
                if(ar[i]+ar[j]+ar[k]==tar)
            {
                res=true;
                cout<<"At index "<<i<<","<<j<<" and "<<k<<endl;
                break;
            }
            }
        }
        }
    }
    if(res!=true)
    {
        cout<<"Target out of array"<<endl;
    }
    return 0;
}

