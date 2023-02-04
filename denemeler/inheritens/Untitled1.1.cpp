#include<iostream>
using namespace std;
 
 class Student{
 	
 	public:
 		int age;
 		string name;
 	
 	
 };
 
 class Person:public Student{
 	
 	public:
 		void Display(){
 			
 			cout<<"name is:"<<name<<"\n age:"<<age;
		 }
 	
 	
 	
 };
 
 int main(){
 	
 	Person p;
 	
 	p.age=21;
 	p.name="Mert Eren Uylar";
 	p.Display();
 	
 	
 	
 	
 }
