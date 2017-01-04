#include<iostream>
using namespace std;
class football
{
	int score1,score2;
	public:
		football()
		{
			score1=0;
			score2=0;
		}
		football(int,int);
		football(football &h);
		void display()
		{
			cout<<"\nteam\tscore\n";
			cout<<"REAL MADRID"<<"\t\t"<<score1<<"\n";
			cout<<"MANCHESTER UNITED"<<"\t"<<score2<<"\n";
		}
		~football()
		{
			cout<<"THE END\n";
		}
};
football::football(int x,int y)
{	
	score1=x;
	score2=y;
}
football::football(football &h)
{
	score1=h.score1;
	score2=h.score2;
}
int main()
{
	cout<<"Foot ball match:\n\n";
	cout<<"REAL MADRID VS MANCHESTER UNITED\n\n";
	cout<<"Match Starting";
	football s;
	s.display();
	cout<<"Half Time Score";
	football s1(1,1);
	football s2(s1);
	s2.display();
	cout<<"Full Time Score";
	football s3(2,1);		
	s3.display();
	return 0;
}


