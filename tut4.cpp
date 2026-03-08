#include<iostream>
  void sum();
  int glo=6;
void sum(){
    std::cout<<"Hello Hello Nazzare Screen par\n";
    std::cout<<glo;
}
int main(){
    // int a=14;
    // int b=15;
    int glo=9;
    glo=45;
    int a=14, b=15;
    float pi=3.14;
    char C='t';
    bool is_true= false;
    sum();
    std::cout<<"\n";
    std::cout<<glo<< is_true;
    std::cout<<"\nThis is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    std::cout<<"\nThe value of pi is: "<<pi;
     std::cout<<"\nThe value of C is: "<<C;
    return 0;
}