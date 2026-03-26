#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxPointsObtain(vector<int>& nums, int k) {
        int lsum = 0;
        int rsum = 0;
        int totalSum = 0;
        int j = k-1;
        int x, y;
        x = y = nums.size() - 1;
        for(int i=0; i<=j; i++){
            lsum = lsum + nums[i];
            totalSum = lsum;
        }

        for(int i = j; i >= 0; i--){
            lsum = lsum - nums[i];
            rsum = rsum + nums[x--];
            totalSum = max(totalSum, lsum+rsum);
        }
        return totalSum;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k = 4;

    cout << obj.maxPointsObtain(nums, k);
    return 0;
}