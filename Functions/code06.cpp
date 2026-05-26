#include<iostream>
using namespace std;
//pass by value
int  print(int x){
    x++; 
    return x; 
}
int main(){
    int num ;
    cout<<"enter the value ";
    cin>>num;
    cout<<endl;
    int p = print(num);
    cout<<"value of the function is "<<p<<endl;
    cout<<"original value of num is "<<num;
}