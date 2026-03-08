//Ordered map
#include<bits/stdc++.h>
using namespace std;


//for integers

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //pre-compute
    map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    //iterate in the map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter your number: ";
    cin >> q;
    cout << mpp[q] << endl;

    return 0;
}


//for characters
/*
int main(){
    string s;
    cin >> s;
    

    //pre-compute
    unordered_map<char, int>mpp;
    for(int i=0; i<s.size(); i++){// O(n)
        mpp[s[i]]++;// O(1) or (O(n) ->once in a blue moon)
    }
    
    //iterate in the map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}
*/
