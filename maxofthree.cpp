#include<iostream>
using namespace std;
class three;
class two;
class one
{
		int a;
	public:
		int one1(int m)
		{
			a=m;
		}
	friend void max(one,two,three);
};
class two
{
		int b;
	public:
		int two2(int n)
		{
			b=n;
		}
	friend void max(one,two,three);	
};	
class three
{
		int c;
	public:
		int three3(int o)
		{
			c=o;
		}
	friend void max(one,two,three);	
};
void max(one x,two y,three z)
{			
	if(x.a>y.b&&x.a>z.c)
		cout<<x.a<<"\t"<<"is the greatest"<<endl;
	else if(y.b>z.c)
		cout<<y.b<<"\t"<<"is the greatest"<<endl;
	else
		cout<<z.c<<"\t"<<"is the greatest"<<endl;
}
int main()
{
	int p,q,r;
	one a1;
	two b1;
	three c1;
	cout<<"Enter three numbers:"<<endl;
	cin>>p>>q>>r;
	a1.one1(p);
	b1.two2(q);
	c1.three3(r);
	max(a1,b1,c1);
	return 0;
}
