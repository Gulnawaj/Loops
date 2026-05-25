#include<iostream>
using namespace std;
//prime number   
bool prime(int x){
    if(x<2){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    for(int i = 2 ; i<x ; i++){
        if(x%i == 0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int num;
    cout<<"enter value of num ";
    cin>>num;
    int  p = prime(num);
    if(p){
        cout<<"it is a prime number";
    }
    else{
        cout<<"it is not a prime number";
    }
}