#include<iostream>
int main()
{
    int first = 0;
    int	second = 1;
    int	sum = 0; 
    int n;
    std::cout<<"Enter the range: ";
		cin>>n;
    std::cout<<"Fibonacci Series: "<<first<<" "<<second;

    sum = first + second;
    while(sum <= n)
    {
        std::cout<<sum<<" ";
        first = second;
        second = sum;
        sum = first + second;
    }

    return 0;
}
