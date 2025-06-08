#ifndef math_pro
#define math_pro
const double PI=3.1415926;
const double eps=0.0001;
long long int pow(long long int base,long long int power){
	if(power==1){
		return base;
	}
	long long int ans=1;
	while(power>0){
		if(power&1){
			ans*=base;
		}
		base*=base;
		power>>=1;
	}
	return ans;
}
long long int fac(long long int base){
	long long int ans=1;
	for(int i=base;i>=2;i--){
		ans*=i;
	}
	return ans;
}
long long int log2(long long int n){
	long long int ans=0;
	while(n>1){
		n/=2;
		ans++;
	}
	return ans;
}
long long int log10(long long int n){
	long long int ans=0;
	while(n>1){
		n/=10;
		ans++;
	}
	return ans;
}
long long int abs_(long long int x){
	if(x>=0){
		return x;
	}
	return -x;
}
double abs_double(double x){
	if(x>=0){
		return x;
	}
	return -x;
}
double sqrt(double x){
	double ans=x,last=-1.00;
	while(abs_double(ans-last)>eps){
		last=ans;
		ans=(ans+x/ans)/2;
	}
	return ans;
}
struct complex{
	double real;
	double imag;
};
complex add(complex a,complex b){
	return complex{a.real+b.real,a.imag+b.imag};
}
complex sub(complex a,complex b){
	return complex{a.real-b.real,a.imag-b.imag};
}
complex mul(complex a,complex b){
	return complex{a.real*b.real-a.imag*b.imag,a.real*b.imag+a.imag*b.real};
}
complex divide(complex a,complex b){
	double d=b.real*b.real+b.imag*b.imag;
	if(d==0){//error
		return complex{0,0};
	}
	return complex{(a.real*b.real+a.imag*b.imag)/d,(a.imag*b.real-a.real*b.imag)/d};
}
#endif
