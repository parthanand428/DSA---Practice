//Linear search using vector
#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int>vec;
   int size;
   cout<<"Enter the size of vector ";
   cin>>size;
   cout<<"Enter the Elements of a vector: "<<endl;
   int element;
   for(int i=0;i<size;i++){
       cin>>element;
        vec.push_back(element);
   }
   int item, f=0;
   cout<<"Enter the item to search ";
   cin>>item;
   for(int val : vec){
       if(val==item){
           cout<<"Element present"<<endl;
           f=f+1;
           break;
       } 
   }
   if(f==0){
       cout<<"Element not present"<<endl;
   }
    return 0;
}