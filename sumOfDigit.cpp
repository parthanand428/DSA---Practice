#include<iostream>
using namespace std;
 int sumOfDigit(int a){
   int rem;
   int sum =0;
   while(a>0){
    rem=a%10;
    sum =sum*1 +rem;
    a=a/10;
   
   }
   return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfDigit(n)<<endl;
    return 0;
}