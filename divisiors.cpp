#include<iostream>
using namespace std;
int main()
{
    int num,i,cont=0;
    cout<<"Enter the number :";
    cin>>num;
    int arr[num];
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            arr[cont]=i;
            cont +=1;
        }
    }
    cout<<"the divisiors of given number is :";
    for(i=0;i<cont;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
