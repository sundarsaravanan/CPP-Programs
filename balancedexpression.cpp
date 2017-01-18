#include<iostream>
#include<cstring>
using namespace std;
int top;
class stack
{
public:
	char a[50];
	int i;
	stack()
	{
		top=-1;
	}
	void push(int x)
	{
		a[top++]=x;
	}
	char pop()
	{
		return a[top--];
	}
};
int main()
{
	int i;
	char a,str[20];
	stack s;
	cout<<"Enter the expression\n";
	cin>>str;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
			s.push(str[i]);
		else
			switch(str[i])
			{
				case ')':
					a=s.pop();
					if(a=='{'||a=='[')
						cout<<"Expression is not balanced\n";
					break;
				case'}':
					a=s.pop();
					if(a=='('||a=='[')
						cout<<"Expression is not balanced\n";
					break;
				case']':
					a=s.pop();
					if(a=='('||a=='{')
						cout<<"Expression is not balanced\n";
					break;
			}
	}
	if(top==-1)
		cout<<"Expression is balanced\n";
	else
		cout<<"Expression is not  balanced\n";
	return 0;
}
