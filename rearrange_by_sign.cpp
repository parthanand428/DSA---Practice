#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, -4, -5, 3, 6};
    int ans[6];
    int pos = 0;
    int neg = 1;

    for(int i=0; i<6; i++){
        if(arr[i] >= 0){
            ans[pos] = arr[i];
            pos += 2;
        } else{
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    if(arr[neg] >0){
        ans[neg] = arr[neg];
    }

    for(int i=0; i<6; i++){
        cout << ans[i] << " ";
    }


    return 0;
}