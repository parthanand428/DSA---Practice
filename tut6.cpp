#include<iostream>
using namespace std;
// #include"this.h" --> This will produced an error if this .h is not present in the current directory
int main(){
    int a=4, b=5;
    std::cout<<"Following are the types of operators in C++" <<endl;
    //Arithemetic operarors
    std::cout<<"The value of a+b is " <<a+b <<endl;
    std::cout<<"The value of a-b is " <<a-b <<endl;
    std::cout<<"The value of a*b is " <<a*b <<endl;
    std::cout<<"The value of a/b is " <<a/b <<endl;
    std::cout<<"The value of a%b is " <<a%b <<endl;
    std::cout<<"The value of a++ is " <<a++ <<endl;
    std::cout<<"The value of a-- is " <<a-- <<endl;
    std::cout<<"The value of ++a is " <<++a <<endl;
    std::cout<<"The value of --a is " <<--a <<endl;
    //Comparision Operators
    std::cout<<"The value of a==b is "<<(a==b)<< endl;
    std::cout<<"The value of a!=b is "<<(a!=b)<< endl;
    std::cout<<"The value of a>=b is "<<(a>=b)<< endl;
    std::cout<<"The value of a<=b is "<<(a<=b)<< endl;
    std::cout<<"The value of a>b is "<<(a>b)<< endl;
    std::cout<<"The value of a<b is "<<(a<b)<< endl;
    return 0;
} 