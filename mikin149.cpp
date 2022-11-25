#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i=2020;i<=3030;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
