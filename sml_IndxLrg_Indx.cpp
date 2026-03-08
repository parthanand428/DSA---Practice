//find the index of smallest and largest element in an Array
#include<iostream>
 using namespace std;
 int main(){
    int a[100],n;
    int largest = INT32_MIN;
    int smallest =INT32_MAX;
    int large_indx;
    int small_indx;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<"Enter the elements of an array: ";
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0;i<n;i++){
    if(a[i]>largest){
        largest = a[i];
        large_indx = i;
    }
 }
 for(int j=0;j<n;j++){
   if(a[j]<smallest){
        smallest = a[j];
        small_indx = j;
    }
 }
 cout<<"largest element is: "<<largest<<" "<<"at index = "<<large_indx<<endl;
 cout<<"smallest element is: "<<smallest<<" "<<"at index = "<<small_indx;
 
  return 0;
 }