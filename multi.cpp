#include<iostream>
using namespace std;
class world
{
	public:
		void w()
		{
			cout<<"add"<<endl;
		}
		void o(int a)
		{
			cout<<a<<endl;
		}
		void r(int a, int b)
		{
			int z=a+b;
			cout<<z<<endl;
		}
		void l(int a, int b, int c)
		{
			int x=a+b+c;
			cout<<x<<endl;
		}
};
		int main()
		{
			world obj;
			obj.w();
			obj.o(1);
			obj.r(2,3);
			obj.l(1,2,3);
		}
