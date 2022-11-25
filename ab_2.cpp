#include<iostream>
#include<math.h>
using namespace std;
class power
{
	public:
		int a,b,c;
		void number()
		{
			cin>>a;
		}
		void numberpower()
		{
			cin>>b;
		}
		void dis()
		{
			c=pow(a,b);
			cout<<c;
		}
};
int main()
{
	power p;
	cout<<"Enter the number:";
	p.number();
	cout<<"Enter the power:";
	p.numberpower();
	cout<<"The power of "<<p.a<<" is :";
	p.dis();
}
