#include<iostream>
#include<vector>
using namespace std;

    int binarySearch(vector<int> arr, int target){
        int st = 0, end = arr.size() - 1;
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
    cout<<"Enter tarrget Element: ";
    cin>> tar1;
    cout<< binarySearch(arr,tar1)<< endl;

    return 0;
}