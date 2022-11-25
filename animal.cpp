#include<iostream>
using namespace std;
class student
{
	private:
			int rno;
			string name;	
	public:
		void setdata()
		{
			cout<<"Enter the rno"<<endl;
			cin>>rno;
			cout<<"Enter the name"<<endl;
			cin>>name;
		}
		void getdata()
		{
			cout<<rno<<endl<<name;
		}
};
int main()
{
	student s;
	s.setdata();
	s.getdata();
	return 0;
};
