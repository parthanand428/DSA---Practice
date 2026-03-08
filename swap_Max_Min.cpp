//swap max & min number of an array.
#include<iostream>
using namespace std;
int main(){
    int n,a[100],i,LI,SI;
    int smallest = INT32_MAX, largest = INT32_MIN;
    cout<<"Enter the size of an Array\n";
    cin>>n;
    cout<<"Enter the elements of an Array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<smallest){
            smallest = a[i];
            SI =i;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>largest){
            largest = a[i];
            LI =i;
        }
    }
    cout<<"Smallest is "<<smallest<<endl;
    cout<<"Largest is "<<largest<<endl;
    swap(a[LI], a[SI]);

    cout<<"New Array is ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}