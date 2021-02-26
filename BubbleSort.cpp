//bubbleSort
#include<iostream>
using namespace std;
int swap(int *a, int *b)
{
	int temp=*a;
	*a = *b;
	*b = temp;
}
int BubbleSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	return 0;
}
int print(int arr[],int n)
{
	 for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	int arr[]={1,6,4,2,7,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,n);
	print(arr,n);
	return 0;
}
