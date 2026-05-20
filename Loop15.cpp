#include<iostream>
using namespace std;
int main(){
    //sum of n natural number using do-while loop 
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i = 1;
    int sum = 0;
    do{
        sum = sum+i;
        i++;
    }
    while(i<=n);
    cout<<"sum is "<<sum;
}