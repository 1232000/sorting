#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[],int n)
{
	int index;
	for(int i=0;i<n-1;i++)
	{
		index = i;
		for(int j = i+1;j<n;j++)
			if(arr[j]<arr[index])
				index = j;

		swap(&arr[index],&arr[i]);
	}
}

int print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={19,15,18,11,14,13};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	cout<<"Sorted array: \n";
	print(arr,n);
	return 0;
}