#include<iostream>
#include<cmath>
using namespace std;
//Check Armstrong Number
bool armstrongNumber(int num ,int digit){
    int n = num;
    int ans = 0 , rem;
    while(n){
        rem = n%10;
        ans = ans + pow(rem,digit);
        n /= 10;
    }
    if(ans == num){
        return 1;
    }
    return 0;

}
int countDigit(int num){
    int count = 0;
    while(num){
        int rem = num%10;
        count++;
        num /= 10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int digit = countDigit(num);
    //cout<<"number of digits in the given number is "<<p;
    int p = armstrongNumber(num,digit);
    if(p){
        cout<<"it is an armstrong number";
    }
    else{
        cout<<"it is not an armstorng number";
    }
}