#include<iostream>
using namespace std;
int main()
{
	int n,g,arr[20];
	cout<<"Enter number of integer elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	bubble(arr,n);
	return 0;
}
