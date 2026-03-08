#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i <= n-2; i++){
        int mini = i;
        for(int j=i; j <= n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void bubble_sort(int arr[], int n){
    for(int i= n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j = i-1;
        int x = arr[i];

        while(j>-1 && arr[j] > x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}