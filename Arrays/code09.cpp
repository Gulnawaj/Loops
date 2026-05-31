#include<iostream>
#include<vector>
using namespace std;
//reverse of the array using vector 
int main(){
    vector<int> arr = {6 ,9 ,11, 7 ,3,2};
    cout<<"elements of the array are ";
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    cout<<endl;
    cout<<"reverse elements of the array: ";
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}