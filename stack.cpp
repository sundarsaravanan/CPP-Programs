#include<iostream>
using namespace std;
template <class t>
class stack
{
	public:
		t *a;
		int top,i,size;
		stack(int s)
		{
			a=new t[s];
			size=s;
			top=-1;
		}
		void push(t ele)
		{
			if(top!=size-1)
			{
				a[++top]=ele;
			}
		}
		t pop()
		{
			return(a[top--]);
		}
		void show()
		{
			for(i=0;i<top;i++)
				cout<<"  "<<a[i];
			cout<<"\n";
		}
};
int main()
{
	int i,j,ele,em,o,num,m,c[5];
	float el,a[5];
	char e(5),k,b[20];
	
	stack<int>st1(5);
	cout<<"\nEnter number of integers:";
	cin>>o;
	for(i=1;i<=o;i++)
	{	
		cin>>c[i];
	}
	cout<<"\nPushed item:\n";
	for(i=1;i<=o;i++)
	{
		cout<<c[i]<<"\n";
		st1.push(c[i]);
	}
	cout<<"\n";
	cout<<"\nPopped item:\n";
	for(i=1;i<=o;i++)
	{
		em=st1.pop();
		cout<<em<<"\n";
	}
	stack<float>st2(5);
	cout<<"\nEnter number of floating point numbers:";
	cin>>num;
	for(j=1;j<=num;j++)
	{	
		cin>>a[j];
	}
	cout<<"\nPushed item:\n";
	for(j=1;j<=num;j++)
	{
		cout<<a[j]<<"\n";
		st2.push(a[j]);
	}
	cout<<"\n";
	cout<<"\nPopped item:\n";
	for(j=1;j<=num;j++)
	{
		el=st2.pop();
		cout<<el<<"\n";
	}
	stack<char>st3(20);
	cout<<"\nEnter number of characters:";
	cin>>m;	
	for(k=1;k<=m;k++)
	{	
		cin>>b[k];
	}
	cout<<"\nPushed item:\n";
	for(k=1;k<=m;k++)
	{
		cout<<b[k]<<"\n";
		st3.push(b[k]);
	}
	cout<<"\n";
	cout<<"\nPopped item:\n";
	for(k=1;k<=m;k++)
	{
		e=st3.pop();
		cout<<e<<"\n";

	}
	return 0;
}	
