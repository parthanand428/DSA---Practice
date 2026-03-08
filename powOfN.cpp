#include<iostream>
using namespace std;

//Simple version
int pow(int m, int n){
	
	if (n==0) return 1;
	
	return pow(m, n-1)*m;
}

//Faster version
int pow_optimized(int m, int n){
	if(n==0) return 1;
	
	if(n%2 == 0) return pow_optimized(m*m, n/2);
	
	else 
	return m * pow_optimized(m*m, (n-1)/2);
}

int main(){
	int m, n;
	cout << "Enter number: ";
	cin >> m;
	
	cout << "Enter exponent: ";
	cin >> n;
	
	int x = pow_optimized(m, n);
	
	cout << "Result is: " <<x;
	return 0;
}
