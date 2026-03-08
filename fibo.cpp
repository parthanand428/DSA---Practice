#include<iostream>
using namespace std;

int fib(int n){
	int t0=0, t1=1, s=0, i;
	
	if(n <= 1) return n;
	
	for(i=2; i<=n; i++){
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	} 
	return s;
}

//using recursion
int rec_fib(int n)
{
	if(n <= 1) return n;
	return rec_fib(n-2) + rec_fib(n-1);
}

int main(){
	cout << rec_fib(6);
	return 0;
}
