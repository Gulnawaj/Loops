#include<iostream>
using namespace std;
//Sum of n natural number  
int digitSum(int num){
    int sum = 0;
    for(int i = 1 ; i<=num ; i++){
        sum += i ;
    }
    return sum;
   
}
int main(){
    int num;
    cout<<"enter value of num ";
    cin>>num;
    cout<<"sum of digits of the given number is "<<digitSum(num);
}