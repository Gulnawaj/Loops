#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
   // int arr[n]; (bad practice)
   int arr[100];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}