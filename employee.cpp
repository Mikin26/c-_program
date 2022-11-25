#include<iostream>
using namespace std;
class employee {
	public:
   int id;
   char name[50];
   char role[50];
   int age;
   int salary;
   int exp;
   char city[50];
   char compnyname[50];  
	void getinfo();
	void showinfo(); 
};
  void employee::getinfo()
{
   cout<<"Enter the name:";
   cin>>name;
   cout<<"enter id:";
   cin>>id;
   cout<<"enter role:";
   cin>>role;
   cout<<"enter age:";
   cin>>age;
   cout<<"enter salary:";
   cin>>salary;
   cout<<"enter city:";
   cin>>city;
   cout<<"enter compny name:";
   cin>>compnyname;
   cout<<"----------------------\n";
}
void employee::showinfo()
{
	cout<<"name is: "<<name<<endl;
	cout<<"id is: "<<id<<endl;
	cout<<"role is: "<<role<<endl;
	cout<<"age is: "<<age<<endl;
	cout<<"salary is: "<<salary<<endl;
	cout<<"city is: "<<city<<endl;
	cout<<"compny name is: "<<compnyname<<endl;
	cout<<"------------------------------------\n";
}
int main()
{
	employee emp[2];
	for(int i=0;i<2;i++)
	{
	emp[i].getinfo();
	}
	for(int i=0;i<2;i++)
	{
	emp[i].showinfo();
	}
}
