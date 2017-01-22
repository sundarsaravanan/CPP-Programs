#include<iostream>
using namespace std;
class matrix
{
	int element[3][3];
public:
	matrix(){};
	matrix(int temp[3][3])
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				element[i][j]=temp[i][j];
	}	
	void read()
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				cin>>element[i][j];
	}
	void display()
	{
		for(int i=0;i<3;i++)
			{
			for(int j=0;j<3;j++)
			{			
				cout<<-element[i][j]<<" ";
			}
			cout<<"\n";
			}
	}
	friend matrix operator -(matrix);
};

matrix operator -(matrix temp)
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			temp.element[i][j]= -temp.element[i][j];
}
int main()
{
	matrix m2;
	cout<<"Enter the array elements:";
	m2.read();
	-m2;
	m2.display();
	return 0;
}
		
		
