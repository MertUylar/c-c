#include<iostream>
using namespace std;

class Altin{
	
	
	public:
		int ayar;
		int kullanilmaMiktari;
	
	public:
		void neKadarKullanildim(){
			
			cout<<kullanilmaMiktari<<endl;
			
		}
	
	
	
	
	
};
class Demir{
	
	
	public:
		int ayar;
		int kullanilmaMiktari;
	
	public:
		void neKadarKullanildim(){
			
			cout<<kullanilmaMiktari<<endl;
			
		}
	
	
	
	
	
};

class Motor::public Altin,public Demir{
public:
	int devirsayisi;
	int kullanilanAltin;
	int kullanilanDemir;
	
	
	
};

int main(){
	Motor m1;
	m1.devirsayisi=1600;
	m1.kullanilaAltin=5;
	m1.kullanilanDemir=1500;
	
	m1.neKadarKullanildim;
	
	
	
	return 0;
}
