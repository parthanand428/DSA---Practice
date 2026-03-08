#include<iostream>
using namespace std;

int fact(int n){
	
	if(n < 0)
	{
	 cout << "Invalid(negative not allowed)!" << endl;
	 return -1;
    }
	if(n == 0) return 1;
	
	return fact(n-1) * n;
}

int iFact(int n)
{
	int i, fact = 1;
	for(i=1; i<=n; i++){
		fact *= i;
	}
	return fact;
}

int main(){
	int n;
	cin >> n;
	
	int p = iFact(n);
	cout << p;
}
