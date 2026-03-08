//Largest in Array
#include<iostream>
 using namespace std;
 int main(){
    int a[100],n,i;
    int largest = INT32_MIN;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the elements of an array: ";
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 for(i=0;i<n;i++){
    // if(a[i]>largest){
    //     largest = a[i];
    // }

    // or
    largest = max(a[i],largest);
 }
 cout<<"largest element is: "<<largest;
  return 0;
 }