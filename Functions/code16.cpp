#include<iostream>
using namespace std;
//square root of the number 
int sqrt(int x){
    long low = 1 , high = x , ans = 0;
    while(low<=high){
        long mid = low + (high-low)/2 ;
        if(mid*mid == x){
           return mid;
        }
        else if(mid*mid < x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }  
    }
    return ans;
}
int main(){
    long num;
    cout<<"enter the number ";
    cin>>num;
    long p  = sqrt(num);
    cout<<"square root of "<<num<<" is "<<p;
}