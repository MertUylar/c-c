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
		void getName(){
			
	        cout<<"Enter the name of digital book archive:"<<endl;
	        cin>>name;
	        cout<<"Enter the typle of digital book archive:"<<endl;
	         cin>>type;
			cout<<"Digital Book Archive name set to"<<name<<endl;
		    cout<<"Digital Book Type is:"<<type<<endl;
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
	string BookName,Type;
	char flag;
	DigitalBookArchive obj1(BookName,Type);
	obj1.getName();
	
	do{
		cout<<"Do you want to add or read a digital book (a/r),or enter(C) for exist the system:";
		cin>>flag;
		if(flag=='a'){
		    obj1.addBook();
		}
		else if(flag=='r'){
			obj1.readBook();
		}
		
		
		
	}while(flag!='c');
	obj1.print();
	
	
	
}
