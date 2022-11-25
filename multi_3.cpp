#include<iostream>
using namespace std;
class aircraft
{
	public:
		void jet()
		{
			cout<<"rafale jet is a part of an indian army"<<endl;
		} 
};
class flying_machine
{
	public:
		void jet()
		{
			cout<<"tejas is an active indian military aircraft"<<endl;
		}
};
int main()
{
	flying_machine obj;
	obj.jet();
	return 0;
}
