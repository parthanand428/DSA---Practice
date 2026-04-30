#include<bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     int longestSubstring(string& s){
//         int n = s.size();
//         int maxLength = 0;

//         for(int i = 0; i < n; i++){
//             vector<int> Hash(256, 0);

//             for(int j = i; j < n; j++){
//                 if(Hash[s[j]] == 1) break;

//                 int len = j - i + 1;
//                 maxLength = max(maxLength, len);
//                 Hash[s[j]] = 1;
//             }
//         }
//         return maxLength;
//     }
// };

class Solution{
public:
    int longestSubstring(string& s){
        int n = s.size();
        vector<int> Hash(256, -1);
        int l=0, r=0, maxLen = 0;

        while(r<n){
            if(Hash[s[r]] != -1){
                if(Hash[s[r]] >= l){
                    l = Hash[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxLen = max(maxLen, len);
            Hash[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};

int main(){
    Solution obj;

    string s = "cadbzabcd";

    cout << obj.longestSubstring(s);
    return 0;
}