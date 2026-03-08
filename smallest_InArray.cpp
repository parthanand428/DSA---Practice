//Smallest in Array
#include<iostream>
 using namespace std;
 int main(){
    int a[100],n,i;
    int smallest = INT32_MAX;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the elements of an array: ";
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 for(i=0;i<n;i++){
   //  if(a[i]<smallest){
   //      smallest = a[i];
   //  }

   //or
   smallest = min(a[i], smallest);
 }
 cout<<"smallest element is: "<<smallest;
  return 0;
 }