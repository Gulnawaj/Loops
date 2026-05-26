#include<iostream>
using namespace std;
//pass by reference 
void print(int &x){
    x++; 
}

int main(){
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    print(num);
    cout<<"Value of num is "<<num;
}