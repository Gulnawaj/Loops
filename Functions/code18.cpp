#include<iostream>
using namespace std;
//compliment of the number 
int compliment(int num){
    int temp = num;
    int mask = 0;
    while(temp){
        mask = (mask<<1) | 1;
        temp = temp>>1;
    }
    return num^mask;
}
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    int x = compliment(num);
    cout<<"compliment of the given number is "<<x;
}