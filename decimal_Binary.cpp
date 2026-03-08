//Convert Decimal to Binary
#include<iostream>
 using namespace std;
 void decimalToBinary(int n){
  int ans = 0,pow =1,rem;
  while(n>0){
    rem = n%2;
    n= n/2;
    ans = ans +(rem*pow);
    pow = pow*10;
  }
  cout<<"Binary is "<<ans;
 }
 int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  decimalToBinary(n);
  return 0;
 }