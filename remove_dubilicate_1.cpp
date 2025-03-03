
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}
int main()
{
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
