#include<iostream>
#include<string>
using namespace std;
class stud
{
		int rno;
		string name,address;
	public:
		friend ostream & operator <<(ostream &,stud &);
		friend istream & operator >>(istream &,stud &);
};
ostream & operator <<(ostream & t,stud & s)
{
	t<<"the roll no is"<<endl<<s.rno<<endl;
	t<<"the name is"<<endl<<s.name<<endl;
	t<<"the address is"<<endl<<s.address<<endl;
	return t;
}
istream & operator >>(istream & q,stud & g)
{
	cout<<"roll no:"<<endl;	
	q>>g.rno;
	cout<<"name:"<<endl;	
	q>>g.name;
	cout<<"address"<<endl;	
	q>>g.address;
	return q;
}
int main()
{
	stud a;
	cin>>a;
	cout<<"the student detail is"<<endl<<a<<endl;
	return 0;
}	
