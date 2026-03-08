#include<iostream>
#include<vector>
using namespace std;

    int recbinarySearch(vector<int> arr, int target, int st, int end){
        
        while(st <= end){
           int mid = st + (end - st)/2;
           if(target > arr[mid]){
            st = mid +1;
           } else if(target < arr[mid]){
            end = mid - 1;
           } else {
            return mid;
           }
        }
        return -1;

    }
int main(){
    vector<int> arr = {12, 34, 46, 71, 83, 95};
    int tar1;
    int st = 0, end = arr.size() - 1;
    cout<<"Enter tarrget Element: ";
    cin>> tar1;
    cout<< recbinarySearch(arr, tar1, st, end)<< endl;

    return 0;
}