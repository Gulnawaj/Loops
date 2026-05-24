#include<iostream>
using namespace std;

//octal to decimal
int main(){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
    int original = num;
    int ans = 0;
    int mul = 1;
    while(num>0){
        int rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8;

    }
    cout<<"decimal number of "<<original<<" is "<<ans;
}