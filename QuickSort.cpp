//Implementation of quick sort
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b =temp;
}
 //we take last element as pivot 
int partition(int arr[],int l,int h)
{
	int pivot = arr[h];
	int i=(l-1);
	for(int j= l;j<=h-1;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return (i+1);
}

void QickSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p = partition(arr,l,h);
		QickSort(arr,l,p-1);
		QickSort(arr,p+1,h);
	}
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={12,19,17,15,11,14};
	int n = sizeof(arr)/sizeof(arr[0]);
	QickSort(arr,0,n-1);
	cout<<"Sorted Array:\n";
	print(arr,n);
	return 0;
}
