//Reverse Array code on a Vector
#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &vec, int start, int end){
     for(int val : vec){
        while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
        }
    }
}
int main(){
    int start = 0, end = 4; 
    vector<int> vec;
    vec.push_back(34);
    vec.push_back(45);
    vec.push_back(21);
    vec.push_back(72);
    vec.push_back(54);
    reverseArray(vec,start,end);
    cout<<"Reverse Array is "<<endl;
    for(int val: vec){
        cout<<val<<" ";
    }
    return 0;
}
