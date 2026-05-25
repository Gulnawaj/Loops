#include<iostream>
using namespace std;
//Sum of two numbers using functions
int sum(int a , int b){
   return  a+b;
}
int main(){
    int a , b ;
    cout<<"enter value of a ";
    cin>>a;
    cout<<"enter value of b ";
    cin>>b;
    cout<<"sum of two numbers is "<<sum(a,b);
}