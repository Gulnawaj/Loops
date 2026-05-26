#include<iostream>
using namespace std;
//count the digits of the number 
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
    int p = countDigit(num);
    cout<<"number of digits in the given number is "<<p;
}