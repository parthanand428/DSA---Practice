//calculate sum & product of all numbers in an array.
#include<iostream>
using namespace std;
int main(){
    int n,a[100],i;
    int sum = 0, prod = 1;
    cout<<"Enter the size of an Array\n";
    cin>>n;
    cout<<"Enter the elements of an Array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }
    for(i=0;i<n;i++){
        prod = prod * a[i];
    }
    cout<<"Summation is "<<sum<<endl;
    cout<<"Product is "<<prod<<endl;
    return 0;
}