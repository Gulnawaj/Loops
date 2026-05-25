#include<iostream>
using namespace std;
//compliment of number of base 10
int main(){
    int num ;
    cout<<"enter the number ";
    cin>>num;
    int ans = 0 , rem;
    int mul = 1;
    while(num){
        rem = num%2;
        rem = rem^1;
        num = num/2;
        ans = ans + rem*mul;
        mul = mul*2;
    }
    cout<<"compliment of the given number is "<<ans;
}