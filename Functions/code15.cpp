#include<iostream>
using namespace std;
//only count trailing zeroes
int trailingZeroes(int n){
    int count = 0;

    while(n >= 5){
        count += n/5;
        n /= 5;
    }

    return count;
}

int main(){
    int num;
    cout<<"Enter number ";
    cin>>num;

    cout<<"Trailing zeroes = "<<trailingZeroes(num);
}