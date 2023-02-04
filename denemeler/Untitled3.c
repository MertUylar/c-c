
#include<iostream>
using namespace std;
// function definition to swap the values.
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
