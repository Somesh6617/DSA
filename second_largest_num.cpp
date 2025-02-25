#include<iostream>
using namespace std;
int main() {
    int ar[5],second_largest_num=0,largest_num=0;
    cout<<"enter the numbers into array :";
    for (int i=0;i<5;i++)
    {
     cin>>ar[i];
    }
    for (int i=0;i<5;i++)
    {
        if(ar[i]>largest_num)
        {
            second_largest_num=largest_num;
            largest_num=ar[i];
        }
        else if(second_largest_num>ar[i] && largest_num!=ar[i])
        {
            second_largest_num=ar[i];
        }
    }
    cout<<"second largest number is :"<<second_largest_num;

    return 0;
}
