//Pair Sum by Brute force method
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;  // Return as soon as we find the pair
            }
        }
    }
    return ans;  // In case no pair is found, return empty vector
}

int main() {
    int size, target;
    vector<int> nums;
    cout << "Enter Size: ";
    cin >> size;
    
    cout << "Enter the Elements of Vector " << endl;
    for(int i = 0; i < size; i++) {
        int element;
        cin >> element;  // Read element from user
        nums.push_back(element);
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = pairSum(nums, target);
    if (!ans.empty()) {
        cout << ans[0] << " , " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
