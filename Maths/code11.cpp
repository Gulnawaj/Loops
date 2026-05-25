#include<iostream>
using namespace std;
//check palindrome
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    int x=num ;
    int ans = 0 , rem;
    if(num<0){
        cout<<"palindrome not exist for negative number";
    }
    while(num){
        rem = num%10;
        num = num/10;
        ans = ans*10 + rem;
    }
    if(x == ans){
        cout<<"it is a palindrome number";
    }
    else{
        cout<<"it is not a palindrome number";
    }
}