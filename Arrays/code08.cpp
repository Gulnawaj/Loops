#include<iostream>
using namespace std;
//linear search
bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[7];

    cout << "Enter 7 elements: ";
    for(int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    if(linearSearch(arr, 7, key)){
        cout << "Key is present";
    }
    else{
        cout << "Key is not present";
    }

    return 0;
}