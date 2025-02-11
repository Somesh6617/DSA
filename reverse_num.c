#include<stdio.h>
int main()
{
int num=1234,rem,n,rev=0;
n=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("the reverse of a number %d is %d",n,rev);
return 0;

}
