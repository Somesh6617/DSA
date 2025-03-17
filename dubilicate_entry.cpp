#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"entr array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    i=0;
    for(j=1;j<n;j++)
        if(arr[i]==arr[j]){
            cout<<"dubilicate entry "<<arr[j];
            break;}
        else
            i++;
    return 0;
}
