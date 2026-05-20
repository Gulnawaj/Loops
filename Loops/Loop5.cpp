#include<iostream>
using namespace std;
int main(){
    //table of any number 
    int n;
    cout<<"Enter number"<<" ";
    cin>>n;
    cout<<"table of the number"<<n<<"is"<<" ";
    for(int i=1; i<=10 ; i++){
        cout<<(i*n)<<" ";
    }
}