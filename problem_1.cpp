#include<iostream>
using namespace std;
float area(int);
float circum(int);
int main()
{
        int r;
        cout<<"\n Enter Radius of Circle: ";
        cin>>r;
        cout<<"\n Area of Circle : "<<area(r);
        cout<<"\n Circumference of Circle : "<<circum(r);
}
float area(int r)
{
        return (3.14 * r * r);
}
float circum(int r)
{
        return(2 * 3.14 * r);
}
