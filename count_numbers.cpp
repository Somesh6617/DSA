#include<iostream>
using namespace std;
int main()
{
    int num,rem=0,rn=0,cont=0;
    cout<<"enter the number :";
    cin>>num;
    int n=num;
    if(num==0)
    {
        cont=1;
    }
    else
    {
    while(num!=0)
    {
        rem=num%10;
        cont+=1;
        num=num/10;
    }
    }
    cout<<"No.of digits in given number is "<<cont;
    return 0;
}
