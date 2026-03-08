//Bubble Sort
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){ //O(n^2)
    int swaps = 0;
    bool isSwap = false;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
                isSwap = true;
            }
        }
        if(!isSwap){// array is already sorted
        return;
      }
    }
    cout<<"Numbers of time swapping done --> "<<swaps<<endl;
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
    bubbleSort(arr,n);
    cout <<"Sorted array: ";
    printArray(arr, n);

    return 0;
}
