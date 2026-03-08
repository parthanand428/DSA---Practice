//Calculator
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char ch;
    cout<<("Enter Number to Calculate: ");
    cin>>num1>>num2>>ch;
    switch(ch){
        case '+': cout<<num1+num2;
                 break;
        case '-': cout<<num1-num2;
                 break;
        case '*': cout<<num1*num2;
                 break;
        case '/': cout<<num1/num2;
                 break;
        case '%': cout<<num1%num2;
                 break;
        default: cout<<"Unable to Calculate";   
                 break;                        
    }
    return 0;
    
}