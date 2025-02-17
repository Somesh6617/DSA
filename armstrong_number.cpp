#include<iostream>
using namespace std;
int main()
{
    int num,rem=0,an=0;
    cout<<"enter the number :";
    cin>>num;
    int n=num;
    while(num!=0)
    {
        rem=num%10;
        an=an+rem*rem*rem;
        num=num/10;
    }
    if(n==an)
    {
        cout<<"True"<<end="";
    }
    else
    {
        cout<<"False"<<end="";
    }
}
