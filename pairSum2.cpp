//Pair Sum by optimal approach
#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int> &nums, int target){
    vector<int>ans;
    int size = nums.size();
int i=0, j=size-1;
int pairSum;
while(i<j){
    pairSum = nums[i] + nums[j];
    if(pairSum>target)
    j--;
    else if(pairSum<target)
    i++;
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}
return ans; // Return empty vector if no pair is found
}

int main(){
    vector<int>nums;
    int size, element, target;
    cout<<"Enter the size of Vector: ";
    cin>>size;
    cout<<"Enter the Elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>element;
        nums.push_back(element);
    }
    cout<<"Enter Target Element:-> ";
    cin>>target;
    vector<int> ans =pairSum(nums, target);
    if (!ans.empty()) {
        cout << ans[0] << " , " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
    return 0;
}