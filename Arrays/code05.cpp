#include<iostream>
using namespace std;
//size of the array  
int main(){
    int arr[] = {10 ,20 ,30 ,40 ,50} ;
    for(int i = 0; i<5 ; i++){
      cout<<arr[i]<<" ";
    }
    cout<<"size of the array is "<<sizeof(arr);
}