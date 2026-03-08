//Pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(k=n-1;k>i;k--){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<j+1;
        }
        int p=i;
        for(j=0;j<i;j++){
            
            cout<<p;
            p--;
             
        }
        
        cout<<endl;
    }
}