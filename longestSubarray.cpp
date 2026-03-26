#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int maxLength = 0;
        int sum = 0;
        int l = 0, r = 0;

        while(r < n){
            sum += arr[r];

    
            while(sum > k){
                sum -= arr[l];
                l++;
            }

            maxLength = max(maxLength, r - l + 1);
            r++;
        }

        return maxLength;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 5, 1, 7, 10};
    int k = 14;

    cout << obj.longestSubarray(arr, k);
}