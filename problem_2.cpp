#include <iostream>
int FindMax(int a[],int n)
	int i, max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max =a[i];
	}
	return max;
}

int FindMin(int a[],int n)
{
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min;
}
int main()
{
	int i, array[50], size, max, min;

	std::cout<<"Input number of elements in array\n";
	std::cin>>size;

	std::cout<<"Enter "<< size << " integers\n";
	for(i=0;i<size;i++)
	std::cin>>array[i];

	max = FindMax(array,size);
	min = FindMin(array,size);

	
	std::cout<<"Maximum element in the array is:" << max << "\n";
	std::cout<<"Minimum element in the array is:" << min << "\n";

return 0;
}
