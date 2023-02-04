#include<iostream>

using namespace std;

class Child{
	
	public:
		void replik1(){
		cout<<"child: mama why do you do that:\n";
		}
		
		void replik3(){
			cout<<"mother can I go to taxim\n";
		}
	
	
};

class Mother{
	
	public:
		void replik2(){
		
		cout<<"Mother: it is none of your busines little child\n";
		}
		void replik3(){
			cout<<"never ever\n";
		}
};

class Theater:public Mother, public Child{
	public:
	void repliks(){
		Child::replik1();
		Mother::replik2();
		
		
	}
	
};


int main(){
	Theater T;
	T.repliks();
	cout<<"*************************\n";
	T.replik1();
	T.replik2();
	cout<<"*************************\n";
	T.Child::replik3();
	T.Mother::replik3();
	
	
	
	return 0;
}
