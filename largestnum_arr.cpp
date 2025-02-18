#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,11,2,9},lar=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    cout<<"The largest number in array is :"<<lar;
}
