#include <iostream>
#include <math.h>
using namespace std;
void checkPrime(int n){
    int count=0;
    for (int i=1;i<=sqrt(n);i++){
        if(n%i==0){
        count++;
        if((n/i)!= i)
        count++;
        }
    } 
    if(count==2)
    cout<<"Yes prime";
    else
    cout<<"not prime";
}

int main() {
    int n;
    cout<<"enter number: ";
    cin>>n;
    checkPrime(n);
    return 0;
}