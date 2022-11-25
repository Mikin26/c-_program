#include<iostream>
using namespace std;
int main()
{
		char i,h;
		float a,b;
	do
	{
	cout<<"Enter the operator +,-,*,/,and,%:";
	cin>>i;
	cout<<"Enter two digit:";
	cin>>a>>b;
	switch (i)
	{
		case '+':
			cout <<a<<" + "<<b<<" = "<<a+b<<"\n";
			break;
		case '-':
			cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
			break;
		case '*':
			cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
			break;
		case '/':
			cout<<a<<" / "<<b<<" = "<<a/b<<"\n";
			break;
		case '%':
			cout<<a<<" % "<<b<<" = "<<a*b/100<<"\n";
			break;
		default:
			cout<<"Error! operator is not correct"<<"\n";
			break;
		return 0;
	
	}
	cout<<"Do you want to conti yes or no:";
	cin>>h;
	}while(h=='y');
}
