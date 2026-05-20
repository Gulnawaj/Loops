#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int i = 1;

    do{
        i++;  //changing the position of the i
        cout<<i<<" ";
        
    }
    while(i<=n);
}