#include<iostream>
float area(int);
float circum(int);
int main()
{
        int r;
        std::cout<<"\n Enter Radius of Circle: ";
        std::cin>>r;
        std::cout<<"\n Area of Circle : "<<area(r);
        std::cout<<"\n Circumference of Circle : "<<circum(r);
}
float area(int r)
{
        return (3.14 * r * r);
}
float circum(int r)
{
        return(2 * 3.14 * r);
}
