#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubstring(string& s){
        int n = s.size();
        int maxLength = 0;

        for(int i = 0; i < n; i++){
            vector<int> Hash(256, 0);

            for(int j = i; j < n; j++){
                if(Hash[s[j]] == 1) break;

                int len = j - i + 1;
                maxLength = max(maxLength, len);
                Hash[s[j]] = 1;
            }
        }
        return maxLength;
    }
};

int main(){
    Solution obj;

    string s = "cadbzabcd";

    cout << obj.longestSubstring(s);
    return 0;
}