#include<iostream>
using namespace std;
int f,r;
class queue
{
public:
	char a[20];
	queue()
	{
		f=0;
		r=-1;
	}
	void deq()
	{
		int i=1;
		while(f<=r)
		{
			cout<<i<<"."<<a[f++];
			i++;
		}
	}
	void enq(char x)
	{
		a[++r]=x;
	}
};
int main()
{
	int no,i;
	char a;
	queue q;
	cout<<"Enter total number of processes\n";
	cin>>no;
	cout<<"Enter the processes one by one";
	for(i=0;i<no;i++)
	{
		cin>>a;
		q.enq(a);
	}
	cout<<"The Order of processes:\n";
	q.deq();
	return 0;
}
