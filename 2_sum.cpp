#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter array size :";
    cin>>n;
    int ar[n],i,j,tar,res=false;
    cout<<"enter "<<n<<" elements :";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"enter the target:";
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
            for(j=0;j<n;j++)
            {
            if(tar==ar[i]+ar[j])
            {
                res=true;
                cout<<"At index "<<i<<","<<j<<endl;
            }
            }
        }

    }
    if(res!=true)
        cout<<"Targer out of array"<<endl;
    return 0;
}
