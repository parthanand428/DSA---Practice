#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
class Solution {
    public :
        vector<string> findRelativeRanks(vector<int>& score){
            int n = score.size();
            vector<string> ans(n);
            priority_queue<pair<int, int>> pq;

            for(int i=0; i<n; i++){
                pq.push({score[i], i});
            }
            
            int rank = 1;
            while(!pq.empty()){
                pair<int, int> p = pq.top();
                pq.pop();

                int index = p.second;

                if(rank == 1){
                    ans[index] = "Gold Medal";
                }
                else if(rank == 2){
                    ans[index] = "Silver Medal";
                }
                else if(rank == 3){
                    ans[index] = "Bronze Medal";
                }
                else{
                    ans[index] = to_string(rank);
                }
                rank++;
            }
            return ans;
        }
};

int main(){
    int player;
    cout << "Enter the number of players: ";
    cin >> player;
    cout << "Enter their Scores: ";

    vector<int> score(player);
    for(int i=0; i<player; i++){
        cin >> score[i];
    }

    Solution s;
    vector<string> ans = s.findRelativeRanks(score);

    cout << "Ranks: ";
    for(string x : ans){
        cout << x << " ";
    }

    return 0;
}

