#include<iostream>
using namespace std;

//Decimal to octal 
int main(){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
    int original = num;
    int ans = 0;
    int mul = 1;
    while(num>0){
        int rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10;

    }
    cout<<"decimal number of "<<original<<" is "<<ans;
}