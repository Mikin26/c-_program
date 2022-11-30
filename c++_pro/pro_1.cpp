#include<iostream>
using namespace  std;
class hotel
{
	int id;
	string name;
	string type; 
	string staff_size; 
	string room_size; 
	string establish_year; 
	string address; 
	string rating_type;
	string website;
	public:
		void setdata()
		{
			this->id=id;
			this->name=name;
			this->type=type;
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			this->address=address;
			this->rating_type=rating_type;
			this->website=website;
		}
};
int main()
{
	hotel h;
	h.setdata();
}
