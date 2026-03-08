#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int> arr, int st, int end, int target){
    st = 0 ,end =
   int mid =st + (end - st)/2;
   while(st >= end){
   if(target > arr[mid]){
    return recBinarySearch(arr, mid + 1, end, target );
   } else if(target< arr[mid]){
    return recBinarySearch(arr, st, mid - 1, target);
   } else  {
    return mid;
   }
   }
   return -1;

}
int main(){
    vexint arr[] = {12, 34,51, 62, 83, 91};
    int st = 0, end = arr.size() - 1;
    
    return 0;
}