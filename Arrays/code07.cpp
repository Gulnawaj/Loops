#include<iostream>
#include<climits>
using namespace std;
//find min and max element in the array
int maxElement(int arr[] , int size){
     int maxi = INT_MIN;
     for(int i =0 ; i<6 ; i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
     }
     return maxi;
}
int minElement(int arr[] , int size ){
     int mini = INT_MAX;
     for(int i =0 ; i<6 ; i++){
        if(mini>arr[i]){
           mini = arr[i];
        }
     } 
     return mini;    
}
int main(){
    int arr[6];
    for(int i = 0;i<6;i++){
         cin>>arr[i];
    }
    for(int i = 0;i<6;i++){
         cout<<arr[i]<<" ";        
    }
    cout<<endl;
    int a = maxElement(arr,6);
    cout<<"maximum element in the array is "<<a<<endl;
    int b = minElement(arr,6);
    cout<<"minimum element in the array is "<<b;
}