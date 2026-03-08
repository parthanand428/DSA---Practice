//Maximum Subarray Sum by Brute Force Approach
#include<iostream>
using namespace std;
int main(){
    int n=7, st, end;
    int a[] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT32_MIN;
    for(st=0;st<n;st++){
        int currentSum=0;
        for(end=st;end<n;end++){
            currentSum = currentSum + a[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout<<"Maximum Subarray Sum is "<<maxSum<<endl;
    return 0;

}