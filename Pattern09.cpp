#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter the value of n"<<" ";
    cin>>n;
    int m;
    cout<<"enter value of m"<<" ";
    cin>>m;
    int count = 1;
    for(int i=1 ; i<=n;i++){
        for(char j=1;j<=m;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}