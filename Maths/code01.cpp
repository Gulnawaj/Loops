#include<iostream>
using namespace std;

//Decimal to binary number 
int main(){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
    int mul = 1;
    int ans = 0;
    while(num>0){
        int rem = num&1;
        num  = num/2;
        ans = (rem*mul)+ans ;
        mul = mul*10;
    }
    cout<<"binary number of the given number is "<<ans;
}