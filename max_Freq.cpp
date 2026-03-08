// Find the smallest element with max frequency
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int mostFrequentElement(vector<int>& nums) {
            map<int, int> mpp;
            int maxi = INT_MIN;
            for(int i=0; i<nums.size(); i++){
                mpp[nums[i]]++;
            }
            for(auto it : mpp){
               maxi = max(maxi, it.second);
            }
            
            int result = INT_MAX;
            for(auto it : mpp){
                if(it.second == maxi){
                    result =  min(it.first,result);
                }
            }
            return result;
        }
    };

int main(){
    vector<int> nums;
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return 0;
    } 
    
    cout << "Enter the elements of an Array: ";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    
    
    Solution obj;
    int result = obj.mostFrequentElement(nums);

    cout << "Most frequent (and smallest if tie) element: " << result << endl;

    return 0;

}