#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{	
	ifstream i;
	i.open("o.txt");
	cout<<"\nEntered text : ";
	char t;
	while(!i.eof())
	{
		i.get(t);
		cout<<t;
	}
	i.close();
	ifstream in;
	in.open("o.txt");
	char te;	
	int count=0;
	while(!in.eof())
	{
		in.get(te);
		count++;
	}
	cout<<"\nNo. of characters : "<<count-2;
	i.close();
	ifstream im;
	im.open("o.txt");
	char word[20];
	int c=0;
	while(!im.eof())
	{
		im>>word;
			c++;
	}
	cout<<"\nNo. of words : "<<c-1;
	ifstream p;
	p.open("o.txt");
	char tex;	
	int coun=1;
	while(!p.eof())
	{
		p.get(tex);
		if(tex=='\n')
			coun++;
	}
	cout<<"\nNo. of lines : "<<coun-2;
	p.close();
	return 0;
}

