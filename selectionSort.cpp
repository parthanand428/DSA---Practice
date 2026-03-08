//Selection Sort
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIdx = i; //starting point of unsorted part
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap (arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100], n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout <<"Sorted array: ";
    printArray(arr, n);

    return 0;
}
