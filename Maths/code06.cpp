#include<iostream>
using namespace std;
//Sum of digit of Given number 
int main(){
    int num;
    cout<<"enter the number:- ";
    cin>>num;
    int ans = 0;
    while(num>0){
        int rem = num%10;
    num = num/10;
    ans = ans+rem;

    }
    cout<<"sum of digits of the given number is "<<ans;
}