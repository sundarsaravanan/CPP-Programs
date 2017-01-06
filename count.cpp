# include<iostream>
# include<fstream>
using namespace std;
int main()
{
	ifstream filein;
	filein.open("output.txt");
	char char_text;
	while(!filein.eof())
	{
		filein.get(char_text);
		cout<<char_text;
	}
	cout<<char_text;
	filein.close();
	ifstream infile;
	infile.open("output.txt");
	char text;
	int count=0,count1=0;
	while(!infile.eof())
	{
		infile.get(text);
		count++;
	}
	cout<<"NO. OF CHAR."<<count;
	infile.close();
	ifstream in;
	in.open("output.txt");
	char words[50];
	while(!in.eof())
	{
		in>>words;
		count1++;
	}
	cout<<"\nNO.OF WORDS."<<count1;
	in.close();
return 0;
}

