#include <iostream>
using namespace std;



/*  //girdi girilmezse yerine koymak için
int divide (int a=2, int b=1) {
 int result;
 result=a/b;
 return (result);
}
int main () {
 cout << divide () << '\n';
 cout << divide (12) << '\n';
 cout << divide (20,4) << '\n';
 return 0;
}

*/

/*   türüne göre aynı adda fonka geçiş yapabilir mesela 3 tane int olsa ve 3 tane girdi alsak o fonksiyona girerdi.

int addition (int a, int b) {
 int r=a+b;
 return r;
}
double addition (double a, double b) {
 double r=a+b;
 return r;
}
int main () {
 cout << “First result is “
 << addition (5,3) << endl;
 cout << “Second result is “
 << addition (5.4,3.8);
}
*/

/*void swap(int x, int y) {
 int temp = x; // save the value at address x
 x = y; // put y into x
 y = temp; //put x into y
}
int main () {
 int a = 100, b = 200;
 cout << a << " " << b << endl;
 swap(a, b);
 cout << a << " " << b << endl;
 return 0;
}*/



/* function definition to swap the values.
void swap(int &x, int &y) {
 int temp = x; // save the value at address x
 x = y; // put y into x
 y = temp; //put x into y
}
int main () {
 int a = 100, b = 200;
 cout << a << " " << b << endl;
 swap(a, b);
 cout << a << " " << b << endl;
 return 0;
}
*/
// function definition to swap the values.
void swap(int *x, int *y) {
 int temp = *x; // save the value at address x
 *x = *y; // put y into x
 *y = temp; //put x into y
}
int main () {
 int a = 100, b = 200;
 cout << a << " " << b << endl;
 swap(&a, &b);
 cout << a << " " << b << endl;
 return 0;
}
