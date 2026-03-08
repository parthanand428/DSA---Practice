#include<iostream>
using namespace std;

int sum(int n){
	
	if(n < 0)
	{
	 cout << "Invalid(negative not allowed)!" << endl;
	 return -1;
    }
	if(n == 0) return 0;
	
	return sum(n-1) + n;
}

int main(){
	int n;
	cin >> n;
	
	int p = sum(n);
	cout << p;
}
