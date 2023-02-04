#include <iostream>

using namespace std;

class Kisi {
public:
  string adi;
  string soyadi;
  void yazdir(){
  	
  	cout<<"student name:"<<adi;
  	
  }
};

int main() {
  Kisi k1;
  k1.adi = "Yusuf";
  k1.soyadi = "SEZER";

  cout << "k1 adi: " << k1.adi << endl;
  cout << "k1 soyadi: " << k1.soyadi << endl;
  k1.yazdir();
  return 0;
}
