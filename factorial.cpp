#include<iostream>
using namespace std;
class factorial
{
	private:
		int num,result,i;
	public:
		void get()
		{
			cout<<"Enter a number:";
			cin>>num;
		}
		void fact()
		{
			result=1;
			for(i=1;i<=num;i++)
			{
				result=result*i;
			}
		cout<<"Factorial of "<<num<<" is "<<result;
		}
};

int main()
{
	factorial number;
	number.get();
	number.fact();
	return 0;
}
