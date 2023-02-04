#include<iostream>
using namespace std;

class DigitalBookArchive{
	
	private:
		string name;
		string type;
		int digitalBookCounter=20;
	
	public:
		DigitalBookArchive(string nam){
		name=nam;
	
		}
		DigitalBookArchive(string nam,string typ){
		
	    name=nam;
		type=typ;
		
		}
		
		
		
		void addBook();
		
		void readBook(){
			digitalBookCounter-=1;
			
		}
		string getName(){
			cin>>name;
			
			return name;
			
			
		}
		
		void print(){
			
			cout<<"The number of remaining digital book is:"<<digitalBookCounter;
		}
	
};
void DigitalBookArchive::addBook(){
	digitalBookCounter+=1;
}
int main(){
	char flag;
	string BookName,Type;
	DigitalBookArchive obj1(BookName,Type);
	cout<<"Enter the name of digital book archive:"<<endl;
	BookName=obj1.getName();
	cout<<"Enter the typle of digital book archive:"<<endl;
	cin>>Type;
	
	cout<<"Digital Book Archive name set to: "<<BookName<<endl;
	cout<<"Digital Book Type is: "<<Type<<endl;
	
	do{
		cout<<"Do you want to add or read a digital book (a/r),or enter(C) for exist the system:";
		cin>>flag;
		if(flag=='a' ){
		    obj1.addBook();
		}
		else if(flag=='r'){
			obj1.readBook();
		}
		
		
		
	}while(flag!='c' );
	obj1.print();
	
	
	
}
