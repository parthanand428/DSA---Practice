#include<iostream>
int main(){
    int num1;
    int num2;
    std::cout<<"Enter the value of num1:\n"; //'<<' this is called Insertion operator
    std::cin>>num1; //'>>'this is called Extraction operator
     std::cout<<"Enter the value of num2:\n";
     std::cin>>num2;

     std::cout<<"The sum is "<< num1 +num2; 
    return 0;
}