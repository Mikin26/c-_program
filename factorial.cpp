#include<iostream>
using namespace std;
int main()
{
	int i,fac,j;
	cout<<"Enter the number:";
	cin>>j;
	for(i=1;i<=j;i++)
	{
		fac=fac*i;
		cout<<"the factorial of "<<i<<" is "<<fac<<endl;
	}
	return 0;
}
