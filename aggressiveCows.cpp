#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>& arr, int N, int cows, int minAllowedDist){ //O(N)
   int cntcows = 1, last = arr[0];
   for(int i=1; i<N; i++){
    if((arr[i] - last) >= minAllowedDist){
        cntcows++;
        last = arr[i];
    }

    if(cntcows >= cows) return true;
   }
   return false;
}
int getDistance(vector<int>& arr, int N, int cows){
    sort(arr.begin(), arr.end()); //O(NlogN)
    int low = 1, ans = -1, high = arr[N-1] - arr[0];
  
    while(low<=high){ //O(log(Range) * N)
    int mid = low + (high - low)/2;
    if(isPossible(arr, N, cows, mid) == true){//right
        ans = mid;
        low = mid + 1;
    } else {//left
        high = mid - 1;
    }
  }

  return ans;
}
int main(){
    int N = 5, cows = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout<<"Largest of minimum possible distance is:: ";
    cout<< getDistance(arr, N, cows) << endl;
    return 0;
}