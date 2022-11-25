#include<iostream>
using namespace std;
class message
{
	private:
		string str;
	public:
		message(string s="hello cars"):
			str(s)
		{
		}
		void setdata()
		{
			cout<<str<<endl;
		}
		void setdata(string s1)
		{
			cout<<s1<<endl;
		}
};
int main()
{
	message m;
	m.setdata();
	m.setdata("hello world");
	return 0;
}
