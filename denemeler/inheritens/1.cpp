#include<iostream>
using namespace std;
class takim{
	public:
	string isim;
	int kuruluYili;
	void yazdir(){
		cout<<"takim sinifi"<<endl;
	}
	
	
	
};

class futbulcu:public takim{
	private:
		string isim="Bir isim belirtilmedi";
	public:	
		int dogumYili;
		float maas;

		
	public:
			string getIsim(){	
			    return isim;
			
			}
			void  setIsim(string isim){	
				this->isim=isim;
			}
	
	
	
};


int main(){
	futbulcu f1;
	takim *f1takim;
	f1takim=&f1;
	
	f1.setIsim("Mert");
	f1takim->isim="galatasaray";
	f1.dogumYili=1990;
	f1.maas=12436;
	cout<<f1takim->isim<<f1.getIsim()<<" "<<f1.dogumYili<<" "<<f1.maas<<endl;
	f1takim->yazdir();
	return 0;
}

