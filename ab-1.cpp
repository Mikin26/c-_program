#include<iostream>
using namespace std;
class circle
{
	public:
		float r,a,b;
		void getr()
		{
			cin>>r;
		}
		void radius()
		{
			a=r/2;
			cout<<a<<endl;
		}
		void circumrefence()
		{
			b=2*3.14*a;
			cout<<b<<endl;
		}
};
int main()
{
	circle o;
	cout<<"Find the radius and circumrefence of circle:"<<endl;
	o.getr();
	cout<<"The radius is:";
	o.radius();
	cout<<"The circumrefence is:";
	o.circumrefence();
}
