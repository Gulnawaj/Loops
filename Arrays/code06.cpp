#include<iostream>
using namespace std;
//check size and total elements in the array
int main(){
    int arr[10] = {10 ,20 ,30, 40,50,60 ,70} ;
    for(int i = 0 ; i<10 ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"size of array is "<<sizeof(arr);
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"total elements in the arrays "<<n;
}