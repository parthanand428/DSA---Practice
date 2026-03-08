//Insertion Sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){ //O(n^2)
    for(int i=1; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current; //placing the curr el in its correct position
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
    insertionSort(arr,n);
    cout <<"Sorted array: ";
    printArray(arr, n);

    return 0;
}
