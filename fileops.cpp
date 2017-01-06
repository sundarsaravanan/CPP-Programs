#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int no,q,rno,i,j,tot;
	float avg;
	string name;
	cout<<"Enter number of students\n";
	cin>>no;
	cout<<"\nEnter number of subjects\n";
	cin>>q;
	int x[q-1];
	ofstream write;
	write.open("student_details.txt");
	for(i=0;i<no;i++)
	{
		cout<<"\nSTUDENT NAME\n";
		cin>>name;
		cout<<"\nSTUDENT ROLL NO:\n";
		cin>>rno;
		cout<<"\nEnter marks in "<<q<<" subjects\n";
		tot=0;
		for(j=0;j<q;j++)
		{
			cin>>x[j];
			tot=tot+x[j];
		}
		avg=(float)tot/q;
		write<<"\t"<<name<<"\t"<<rno;
		for(j=0;j<q;j++)
			write<<"\t"<<x[j];
		write<<"\t"<<tot<<"\t"<<avg<<"\n";
	}
	write.close();
	ifstream read;
	read.open("student_details.txt");
	cout<<"\nStudent Details : \n";
	cout<<"Name\tRollno\t";
	for(j=0;j<q;j++)
		cout<<"mark"<<j+1<<"\t";
	cout<<"Total\tAverage\n";
	for(i=0;i<no;i++)
	{
		read>>name>>rno;
		for(j=0;j<q;j++)
			read>>x[j];
		read>>tot>>avg;
		cout<<name<<"\t"<<rno;
		for(j=0;j<q;j++)
			cout<<"\t"<<x[j];
		cout<<"\t"<<tot<<"\t"<<avg<<endl;
	}
	read.close();
	return 0;
}
