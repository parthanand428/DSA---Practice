//longest consecutive sequence
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveElements(vector<int>&nums){
    if(nums.size() == 0) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for(int i=0; i<n; i++){
        if(nums[i] - 1 == lastSmaller){// gets consecutive sequence
            cnt += 1;
            lastSmaller = nums[i];
        } else if (nums[i] == lastSmaller) {
            // duplicate element, skip
            continue;
        } else{// sequence break
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main(){
    vector<int> nums;
    cout << "Enter the numbers (enter -1 to stop): ";
    int num;
    while(cin >> num && num != -1){
        nums.push_back(num);
    }
    int x = longestConsecutiveElements(nums);
    cout << "Longest consecutive sequence is "<< x << endl;

    return 0;

}