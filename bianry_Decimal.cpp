//Convert Binary to Decimal
#include<iostream>
 using namespace std;
 void binaryToDecimal(int binNum){
  int ans = 0,pow =1,rem;
  while(binNum>0){
    rem = binNum%10;
    binNum= binNum/10;
    ans = ans +(rem*pow);
    pow = pow*2;
  }
  cout<<"Decimal is "<<ans;
 }
 int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  binaryToDecimal(n);
  return 0;
 }