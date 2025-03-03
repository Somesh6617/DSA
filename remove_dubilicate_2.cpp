
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      arr[i+1] = arr[j];
      i++;
    }
  }
  return i;
}
int main() {
  int n;
  cout<<"Enter the size:";
  cin>>n;
  int arr[n] ,i;
  cout<<"Enter array elements:";
  for(i=0;i<n;i++)
  {
        cin>>arr[i];
  }
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}
