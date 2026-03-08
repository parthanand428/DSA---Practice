#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &nums, int n){
    int mx = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] > mx)
            mx = nums[i];
    }
    return mx;
}

void countSort(vector<int> &nums){
    int n = nums.size();
    int mx = findMax(nums, n);

    vector<int> count(mx+1, 0);

    for(int i=0; i<n; i++)
        count[nums[i]]++;

    int i=0, j=0;
    while(i <= mx){
        if(count[i] > 0){
            nums[j++] = i;
            count[i]--;
        } 
        else i++;
    }
}

int main(){
    vector<int> nums;
    cout << "Enter numbers (enter -1 to stop): ";
    int num;
    while(cin >> num && num != -1)
        nums.push_back(num);

    countSort(nums);

    for(int x : nums)
        cout << x << " ";
}

