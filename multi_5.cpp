#include<iostream>
using namespace std;
class shape
{
	public:
			int h,b;
			float r;
		void setdata_tri()
		{
		
			cin>>h>>b;
		}
		void setdata_circ()
		{
	
			cin>>r;
		}
};
class tri:public shape
{
	public:
		int getdata_tri()
		{
			cout<<(h*b)/2<<endl;
		}
};
class circle:public shape
{
	public:
		int getdata_circ()
		{
			cout<<r*r*3.14<<endl;
		}
};
int main()
{
	tri t;
	cout<<"Enter the h and b"<<endl;
	t.setdata_tri();
	cout<<"The area of triangle is:"<<endl;
	t.getdata_tri();
	circle q;
	cout<<"Enter the radius"<<endl;
	q.setdata_circ();
	cout<<"The area of circle is:"<<endl;
	q.getdata_circ();
	return 0;
}
