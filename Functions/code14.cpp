#include<iostream>
using namespace std;
//trailing zeroes at the end of the factorial 
int trailingZeroes(int num){
    int count = 0;
    while(num>=5){
        count = count + num/5 ;
        num /= 5;
    }
    return count;

}
int factorial(int num){
    int fact = 1;
    for(int i = 1 ; i<=num ; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int p = factorial(num);
    cout<<"factorial of the number is  "<<p<<endl;
    int x = trailingZeroes(num);
    cout<<"number of zeroes at the end of the number is "<<x;
}