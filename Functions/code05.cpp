#include<iostream>
using namespace std;
//factorial of the number   
int factorial(int x){
    int fact = 1;
    for(int i=1 ; i<=x ; i++){
        fact = fact*i;
    }
    return fact;

}
int main(){
    int num;
    cout<<"enter value of num ";
    cin>>num;
    int  p = factorial(num);
    cout<<"factorial of the given number is "<<p;
}