//Inverted Pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0; i<n; i++){
            for(int k=0;k<i;k++){
                cout<<" ";
            }
            for(j=n;j>i;j--){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
}