#include<iostream>
using namespace std;
// values are passed by-value (copied)
// the variables a and b are local variables.
// any modification to them are lost when the function returns.
void test(int *a, int b){
*a = *a+b;
}
int main() {
int a=4;
int b=6;
test(&a,b);
cout<< a << " " <<b ; // values of a and b are not changed.
// a=4, b=6
} 
