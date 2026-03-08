#include<iostream>
 using namespace std;
 void printFibonacci(int n){
  int n1=0;
  int n2=1;
  int n3;
  
  for(int i=0;i<n;i++){
    
    n3=n1+n2;
    cout<<n1<<" ";
    n1=n2;
    n2=n3;
  }
 }
 int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  printFibonacci(n);
  return 0;
 }