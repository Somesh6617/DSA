#include<iostream>
using namespace std;
int main()
{
    int ch;
    float r,l,b;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Area of the circle: "<<(3.14*r*r);break;
        case 2:cout<<"Area of the rectangle: "<<(l*b);break;
        default :cout<<"Invalid choice";
    }
    return 0;
}
