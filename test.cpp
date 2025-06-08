#include "src.h"
#include <iostream>
using namespace std;
int main(){
	cout<<PI<<" "<<eps<<endl;
	cout<<pow(2,10)<<" "<<fac(3)<<endl;
	cout<<log2(1024)<<" "<<log10(100)<<endl;
	cout<<abs_(-1024)<<" "<<sqrt(4)<<endl;
	complex a,b;
	a={1,1};
	b={3,3};
	cout<<add(a,b).real<<" "<<add(a,b).imag<<endl;
	return 0;
}
