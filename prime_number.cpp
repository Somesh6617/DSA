#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"Enter the number :";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        cout<<"Given number is prime number";
    }
    else
    {
        cout<<"Given number is not a prime number";
    }
    return 0;
}
