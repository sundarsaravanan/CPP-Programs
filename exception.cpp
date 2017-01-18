#include<iostream>
using namespace std;
class div
{
	public:	
		void eh(float x,float y)
		{
			try
			{
				if(y==0)
					throw(y);
				else 
					cout<<"the quotient is=\n"<<x/y;
			}
			catch(float y)
			{
				cout<<"Could not perform division *******";
			}
		}
}d;	
int main()
{
	float a,b;
	cout<<"enter the nos to be divided";
	cin>>a>>b;	
	d.eh(a,b);
	try
	{	
		int i=0,x[5],s;
		cout<<"\n enter the array elements:";
		while(i>=0)
		{
			if(i<s)
			{
				cin>>x[i];
				i++;
			}
			else
				throw 1;
		}
		cout<<"the array elements are";
		for(i=0;i<5;i++)
		{
			cout<<x[i]<<endl;
		}
	}
	catch(...)
	{
		cout<<"the nos entered are not within the limit!!!";
	}	
	return 0;
}
