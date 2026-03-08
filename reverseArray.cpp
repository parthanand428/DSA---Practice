//Reverse of an Array
#include<iostream>
 using namespace std;
 void reverseArray(int a[], int size){
   int start =0, end =size -1;
   while(start<end){
      swap(a[start], a[end]);
      start++;
      end--;
   }  
 }
 int main(){
   int size,i;
   int a[100];
   cout<<"Enter the size of an Array: ";
   cin>>size;
   cout<<"Enter the elements of an Array: ";
   for(i=0;i<size;i++){
      cin>>a[i];
   }
   reverseArray(a,size);
   for(i=0;i<size;i++){
      cout<<a[i]<<" ";
   }
   cout<<endl;
   return 0;
 }