#include<iostream>
using namespace std;
int main()
{
    int num,rem=0,sum=0;
    cout<<"enter the number :";
    cin>>num;
    int n=num;
    while(num!=0)
    {
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
    }
    if(n==sum)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0;
}

