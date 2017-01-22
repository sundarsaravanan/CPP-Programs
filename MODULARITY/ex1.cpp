#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
	cout<<"\nBefore Sorting:\n";
	for(int k=0;k<n;k++)
		cout<<arr[k]<<"\t";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nAfter Sorting:\n";
	for(int k=0;k<n;k++)
		cout<<arr[k]<<"\t";
	cout<<"\n";
}

