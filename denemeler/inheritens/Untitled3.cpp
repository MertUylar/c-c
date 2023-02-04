#include<iostream>
using namespace std;


class Staff{
	private:
		char name[50];
		int age;
		
	public:
		void getdate();
		void display();
	
	
};
class Murderer:public Staff{
	private:
		int speed;
		
	public:
		void getdate();
		void display();
	
	
};

void Staff::getdate(){
	cout<<"name:";
	gets(name);
	cout<<"age:";
	cin>>age;
	
}
void Staff::display(){
	cout<<"name is:"<<name<<endl;
	cout<<"age is :"<<age<<endl;
	
	
}

void Murderer::getdate(){
	cout<<"speed:";
	cin>>speed;

	
	
}
void Murderer::display(){
	cout<<"speed:"<<speed;
	
}
int main(){
	Murderer m;
	m.Staff::getdate();
	m.getdate();
	cout<<"Enter Display";
	m.Staff::display();
	m.display();
	
	return 0;
}
