#include<iostream>
using namespace std;

int fact(int x){
	if(x <= 1) return 1;
	
	return x * fact(x-1);
}

int nCr(int n, int r){
	int num, den;
	
	num = fact(n);
	den = fact(r) * fact(n-r);
	
	return num/den;
	
}

//using recursion
int NCR(int n, int r){
	if(r==0 || n==r) return 1;
	
	return NCR(n-1, r-1) + NCR(n-1, r);
}

int main(){
	
	cout << NCR(4,2);
	return 0;
}
