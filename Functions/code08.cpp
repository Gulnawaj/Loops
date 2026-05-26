#include<iostream>
using namespace std;
//swap of two numbers 
void swap(int &x , int &y){
    int temp = x ;
    x = y;
    y = temp; 
}

int main(){
    int a , b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    swap(a,b);

    cout<<"Value of a and b after swap "<<a<<" "<<b;
}