//Insertion sort using c++
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		temp = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j=j-1;
		} 
		arr[j+1] = temp;
	}
}

void  print (int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]= {12,11,14,19,15,13};
	int n= sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	print(arr,n);
	return  0;
}
