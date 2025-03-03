
#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the size:";
  cin>>n;
  int arr[n] ,i=0,j,c=0;
  cout<<"Enter array elements:";
  for(i=0;i<n;i++)
  {
        cin>>arr[i];
  }
  i=0;
  for(j=1;j<n;j++)
  {
      if(arr[i]!=arr[j])
      {
          i++;
          arr[i]=arr[j];
      }
      c=i+1;
  }
  cout<<"Array after removing dubilicants is:";
   for(j=0;j<c;j++)
   {
        cout<<arr[j]<<endl;
   }
   return 0;

}
