#include<iostream>
#include<queue>
#include<list>
using namespace std;

class Insan{
	string ad;
	int yas;
	bool engelliMi;
	public:
		Insan(string ad,int yas,bool engelliMi=false): ad(ad),yas(yas),engelliMi(engelliMi){
		}
		void yazdir()const{
		    cout<<"Ad :"<<endl<<"yas :"<<endl<<"engelli durumu:";
				  if(engelliMi){
					cout<<"Evet";
					
				   }
			      else
				   cout <<"Hayir";
			 cout <<endl;
		
		}	
			
		
	
};
int main(){
	Insan insan("Arif",30);
	Insan insan2("Mert",2);
	insan.yazdir();
	insan2.yazdir();
	
	
	
	
	return 0;
	
}
