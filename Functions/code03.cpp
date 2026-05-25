#include<iostream>
using namespace std;
//Sum of digits of the given number  
int digitSum(int x){
    int ans = 0;
    int rem;
    while(x){
        rem  = x%10;
        ans = ans+rem;
        x = x/10;
    }
    return ans ;
   
}
int main(){
    int num;
    cout<<"enter value of num ";
    cin>>num;
    cout<<"sum of digits of the given number is "<<digitSum(num);
}