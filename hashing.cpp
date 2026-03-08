#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     cout << "Enter the number";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     //precompute
// int hash[100000000] = {0};
// for(int i=0; i<n; i++){
//     hash[arr[i]] +=1;
// }



// int q;
// cin>> q;
// cout << "Enter the number to find the frequency";
// while(q--){
//     int number;
//     cin>> number;
//     //fetch
//     cout<< "Frequency of this number is";
//     cout << hash[number] <<endl;
// }
// return 0;
// }

int main(){
    string s;
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}
