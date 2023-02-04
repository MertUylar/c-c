#include<iostream>
using namespace std;

class She{
	
	private:
		int age;
		string name;
		int salary;
	
	public:
	She(int age,int salary,string name){
	
		this->age=age;
		this->name=name;
		this->salary=salary;
    }
	friend void ShowInf(She she);
};
void ShowInf(She she){
	cout<<"name:"<<she.name<<"age:"<<she.age<<"salary"<<she.salary;
	
	
	
}

int main(){
	
	She she(25,1422,"mert");
	ShowInf(she);
	
	
	
}
